# Setup
This project was tested using an ESP32 on the Arduino IDE.   

To enable ESP32 upload and examples, add https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json to File -> Preferences -> Additional Board Manager URL  

Useuful tool for ESp32 development: https://github.com/me-no-dev/EspExceptionDecoder

# Project Information
This protoype datalogging software currently takes on-board time measurements, sample numbers, and an analog reference provided by a potentiometer, and saves them to a `data.csv` file, which can be opened and viewed by MS Excel or as a text file. 

In the event of a power-down, old CSV files will not be touched, and a new file following a 'data#.csv' naming scheme will be created.  
  
Once all necessary sensors are acquired, and more dedicated circuitry is built, Logger values can be updated to contain any new information. For testing purposed, a potentiometer was used to simualte a sensor with a voltage output.  

If any new information needs to be tracked, updating the 'information' struct in the 'Logger.h' file is recommended to keep the core data organized.  
  
Currently, the project is mainly run out of the `DataLogger` directory to work smoothly with the Arduino IDE tools.

## Pinouts
| ESP32 | SD Breakout |
|:-----:|:-----------:|
|  D23  |      DI     |
|  D19  |      DO     |
|  D18  |     CLK     |
|   D5  |      CS     |  

D1 used for potentiometer input testing.
