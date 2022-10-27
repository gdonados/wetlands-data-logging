# SD_Test
Simple library script to ensure that the SD card can be written to properly. Writes files foo.txt and test.txt to the SD card. foo.txt should contain the text 'Hello World'.  
  
An Adafruit SD breakout was used for testing.    
  
### Pinouts:

| **ESP32**  | **SD Breakout** |
|------------|-----------------|
| D23 (MOSI) | DI              |
| D19 (MISO) | DO              |
| D18 (SCLK) | CLK             |
| D5 (CS)    | CS              |
