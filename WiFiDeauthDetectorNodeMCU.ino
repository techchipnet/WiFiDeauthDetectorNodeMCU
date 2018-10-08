//WiFi Deauth Detector NodeMCU with in-build leds.
//create by Anil Parashar
//www.techchip.net
//https://youtube.com/techchipnet

#include <ESP8266WiFi.h>
 
    const char* ap     = "ssid";   //Your WiFi's access point name
    const char* pass = "password"; //Your WiFi's password
    int wifiStatus;
    int connectStatus = 0;
    
void setup() {
      pinMode(LED_BUILTIN, OUTPUT), pinMode(2, OUTPUT);
      WiFi.begin(ap, pass);
      }
     
void loop() {
      wifiStatus = WiFi.status();
      if(connectStatus == 0){ digitalWrite(LED_BUILTIN, 1), digitalWrite(2, 0);} //for inverted change 0 to 1 & 1 to 0
      if(wifiStatus == WL_CONNECTED){ digitalWrite(2, 1), digitalWrite(LED_BUILTIN, 0), connectStatus ++;}
      else if(connectStatus != 0){digitalWrite(LED_BUILTIN, 1), digitalWrite(2, 0); }
      delay(1000);
}
