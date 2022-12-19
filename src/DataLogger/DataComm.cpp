#include "Logging.h"

WiFiServer server(80);

DataComm::DataComm() {}

void DataComm::initWifi()
{
  WiFi.mode(WIFI_AP);
  WiFi.softAP(TEST_SSID, TEST_PASS);
  Serial.println("Server began with default credentials:");
  Serial.print("SSID: ");
  Serial.println(TEST_SSID);
  Serial.print("PASSWORD: ");
  Serial.println(TEST_PASS);
  Serial.print("IP: ");
  Serial.println(IP);

  server.begin();
}

void DataComm::checkConnected()
{
  
}

void DataComm::transmitData()
{
  
}
