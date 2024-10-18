# Spyder-Net
___
Spyder net is a _[Asynchronous](https://en.wikipedia.org/wiki/Asynchrony_(computer_programming))_ network connection providing device which can make **WiFi** 2.4 Ghz Connections.

### TO-DO-List 
note this list will be archived after the complition of the project.
* [X] Purchasing required [components](#components) for the project.
* [X] Initializing the github repository for [spyder-net](https://github.com/lordofwizard/spyder-net.git)
* [X] Learning basics of EPS-32 device and reading it's documentation throughly
* [X] Creation of a hotspot WAP (WiFi access point) with ESP-32.
* [X] Monitoring device connection and temprature managment of the device.
* [X] Learning how to make asynchronous WiFi connections with async.h
* [X] Writing own library of functions to make async wifi connections.
* [X] Writing functionality to check the Number of Devices in a selected area
* [X] Making async wifi connections based on the Privious NO.
* [X] Learning the [GPIO](https://en.wikipedia.org/wiki/General-purpose_input/output) layout of EPS-32
* [X] Testing LED's on BreadBoard
* [X] Writing functinality for LED's based on the status of program
* [X] Final testing on BreadBoard
* [X] Assembly with soldering of the product


### Components
* EPS-32 
* Jumper Wires
* Laptop running (GNU/Linux) + wifi card of 2.4 Ghz
* LED's
* Soldering and circuit wiring common components

## Libraries Used
To run this project, you'll need to install the following libraries:

1. **WiFi.h** (ESP32's built-in WiFi library)
   - Documentation: [WiFi library for ESP32](https://github.com/espressif/arduino-esp32/tree/master/libraries/WiFi)
2. **ESPAsyncWebServer**
   - Installation: [ESPAsyncWebServer GitHub](https://github.com/me-no-dev/ESPAsyncWebServer)
3. **LiquidCrystal_I2C** (for I2C communication with the LCD)
   - Installation: [LiquidCrystal_I2C GitHub](https://github.com/johnrickman/LiquidCrystal_I2C)


### How this device functions
* ESP-32 Wifi Module checks for Number of devices that needs wifi in area
* Users will connect to a Basic node of the Room 
* Async connections will be created
* Users will be shifted to accomodate the bandwidth according to the need of users

### Why this device is better than traditional multiconnection approach
1. ESP-32 costs less than 700 INR
2. Router costs 2000 INR +
3. Even if you have bandwidth of 1Gbps + you still can't give it to beyond MAX no of the devices router can handle at once.
4. There is only 1 node for wifi with same SSID.
5. If one node is OUT the whole connection is down.
6. Cheap Routers does not have QUIS functionality and doesn't have Per User Bandwidth control capabilities.

### Future Improvements
Add support for setting bandwidth limits for individual clients.
Implement a web interface for monitoring and managing the router.
Extend the project to include traffic monitoring and logging.


