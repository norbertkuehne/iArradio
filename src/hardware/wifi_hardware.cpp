#include "wifi_hardware.hpp"

void init_wifi()
{
    WiFiManager wifiManager;
    wifiManager.autoConnect(WIFI_AP_NAME, WIFI_AP_PASS);
}

int get_wifi_rssi()
{
    long rssi = WiFi.RSSI();
    if (rssi > -67)
    {
        return 5;
    }
    if (rssi >= -70 && rssi < -67)
    {
        return 4;
    }
    if (rssi >= -80 && rssi < -70)
    {
        return 3;
    }
    if (rssi >= -90 && rssi < -80)
    {
        return 2;
    }
    return 1;
}