 #include <ESP8266WiFi.h>
 
    const char* ap     = "your_ssid";
    const char* pass = "password";
    int wifiStatus;
    int connectStatus = 0;
    
void setup() {
      pinMode(2, OUTPUT);
      WiFi.begin(ap, pass);
      }
     
void loop() {
      wifiStatus = WiFi.status();
      if(connectStatus == 0){ digitalWrite(2, LOW);}
      if(wifiStatus == WL_CONNECTED){ digitalWrite(2, HIGH), connectStatus ++;}
      else if(connectStatus != 0){digitalWrite(2, LOW); }
      delay(1000);
}
