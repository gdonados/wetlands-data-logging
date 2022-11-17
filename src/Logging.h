/**
 * Logging.h - Data logging for the Wetlands Monitoring Clinic
 *
 * Manages operations related to saving .csv data to SD card storage
 *
 * Timestamp data is temporary based on milliseconds since program start
 * Recommend improving functionality with RTC capacbilities
 */

#include "FS.h"
#include "SPI.h"
#include "SD.h"

class Logging
{
private:
public:
    Logging();
    void createFile(fs::FS &fs, char *path);
    void removeFile(fs::FS &fs, char *path);
    void writeFile(fs::FS &fs, char *path, char *content);
    void readFile(fs::FS &fs, char *path);
};

struct
{
    int timestamp;
    int sample_number;
    int battery_level;
} information;