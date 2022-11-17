# Setup
This project was tested using an ESP32 on the Arduino IDE.   

To enable ESP32 upload and examples, add https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json to File -> Preferences -> Additional Board Manager URL  

Useuful tool for ESp32 development: https://github.com/me-no-dev/EspExceptionDecoder

# Project Information
This protoype datalogging software currently takes on-board time measurements, sample numbers, and an analog reference provided by a potentiometer, and saves them to a `data.csv` file, which can be opened and viewed by MS Excel or as a text file.  
  
Once all necessary sensors are acquired, and more dedicated circuitry is built, Logger values can be updated to contain any new information.  
  
Currently, the project is mainly run out of the `DataLogger` directory to work smoothly with the Arduino IDE tools. The source files are provided separately for use in other microcontroller environments.

### To be included
Currently, the software runs on a polling architecture, relying solely on delays. This is only for proof-of-concept, and an interrupt based architecture will be implemented shortly.  
Time permitting, WiFi based SD dumps to a host laptop will be included. 
