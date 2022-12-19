/**
   Logging.h - Data logging for the Wetlands Monitoring Clinic

   Manages operations related to communicatin SD card data over WiFi

   ESP is set to AP mode, currently a device can connect and request SD data
   to be dumped.
*/

#include "WiFi.h"

class DataComm
{
  private:

  public:
    DataComm();
    void initWifi();
    void checkConnected();
    void transmitData();
};

//Should be updated to more permanent credentials
const char * TEST_SSID  = "ESP_DL1";
const char * TEST_PASS  = "password";
const char * TEST_IP    = "192.168.1.1";
