/**
 * Main program for remote data logging
 * 
 * Remove all references to DHT sensor for production
*/

#include "Logging.h"

#define POTPIN  4 //Testing with potentiometer

char * file_name = "/data.csv";
char input[100];
Logging logger;

void setup()
{
    Serial.begin(115200);

    if (!SD.begin())
    {
        Serial.println("Card Mount Failed");
        return;
    }

    information.timestamp = millis();
    information.sample_number = 0;
    information.battery_level = 5;

    logger.createFile(SD, file_name);
    logger.writeFile(SD, file_name, "Timestamp, Samp. Num, Measurement\n"); //Change to final headers in production
}

void loop()
{
  delay(5000);

  information.timestamp = millis();

  //Replace with sensor values
  sprintf_P(input, (PGM_P)F("%d, %d, %d\n"), information.timestamp, ++information.sample_number, analogRead(POTPIN));
  
  logger.writeFile(SD, file_name, input);
}
