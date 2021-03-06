
#ifndef SETTINGS_H
#define SETTINGS_H
  /*
   Uncomment the next line to enable debug mode.
   This gives much more info about what's happening
   to the serial port.
  */
  //#define DEBUG 1

  // Set this to the value of your energy meter
  #define PULSES_PER_KWH 1000
  // The code from the Sparnas tranmitter. Under the battery lid there's a sticker with digits like '400 643 654'.
  // Set SENSOR_ID to the last six digits, ie '643654'.
  #define SENSOR_ID 643654
  #define FREQUENCY 867987500

  // Settings for the Mqtt broker:
  #define MQTT_USERNAME "YOUR_MQTT_USERNAME"
  #define MQTT_PASSWORD "YOUR_MQTT_PASSWORD"
  #define MQTT_SERVER "YOUR_MQTT_SERVER_IP"
  #define MQTT_PORT 1883
  #define MQTT_STATUS_TOPIC "EspSparsnasGateway/valuesV2"
  #define MQTT_DEBUG_TOPIC "EspSparsnasGateway/debugV2"
  #define DISCOVERY_PREFIX "homeassistant"
  
  // WiFi settings
  #define WIFISSID "YOUR_WIFI_SSID"
  #define WIFIPASSWORD "YOUR_WIFI_PASSWORD"

  #define APPNAME "EspSparsnasGateway"
  #define NTPSERVERNAME "pool.ntp.org"
  #define LOCALTZ "CET-1CEST,M3.5.0,M10.5.0/3"  // Stockholm
  #define SERIALSPEED 115200

  #define LED_RED D0
  #define LED_GREEN D3
  #define LED_BLUE D2

  #define LED_RED_BRIGHTNESS 150      // 0-255
  #define LED_GREEN_BRIGHTNESS 25     // 0-255
  #define LED_BLUE_BRIGHTNESS 255     // 0-255

#endif
