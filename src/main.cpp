// Basically importing wifi module
#include <WiFi.h>
#include <LiquidCrystal_I2C.h>
#include <ESPAsyncWebServer.h>

// Replace with your network credentials
const char* ssid     = "Sypder Net Alpha"; // This variable tells the SSID ( Name of the wifi connection)
const char* password = "123456789"; // This str is the password that will be used in this program

AsyncWiFiServer server(80); // just to setup the server but aint nobody gonna use webinterface anyways
int totalBandwidth = 100; // Total available bandwidth (in some units, e.g., Mbps)
int currentUsers = 0; // To track the number of connected users


void setup() {
  
  lcd.begin();
  lcd.backlight(); // Turn on the backlight
  lcd.setCursor(0, 0); // Set cursor to the first row
  lcd.print("Devices : "+currentUsers); // Display a message on the LCD
  
  WiFi.softAP(ssid, password);
  //This above statement initializes the WIFI 
  IPAddress IP = WiFi.softAPIP();
  // It's an IPAddress Enum var which can be used to print router IP but with my 
  // Observation the default ip Right now is (192.168.4.2) // it's dynamic tho
  server.begin();
  
}

void loop(){
  WiFiClient client = server.available(); // This client var checks is 1 wifi connection is connected or not..
  
    if (client) { // If a new client connects
    
    // Handle new client connection
    currentUsers++; // Increment the number of connected users

      // Calculate bandwidth per user
    float bandwidthPerUser = static_cast<float>(totalBandwidth) / currentUsers;

      // Update the LCD display with the current user information
    lcd.clear(); // Clear the LCD
    lcd.setCursor(0, 0); // Set cursor to the first row
    lcd.print("Devices : " + String(currentUsers)); // Show the number of devices

    while (client.connected()){
    delay(1); // Allow some time for the client to process the response
  }
      // When the client disconnects, clean up
    if(client.stop()){
       currentUsers--;
       lcd.print("Devices : "+currentUsers); // Display a message on the LCD

    }
    
    // Decrement the number of connected users
      
   
  }
      
}
