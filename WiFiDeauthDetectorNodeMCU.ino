 #include <ESP8266WiFi.h>
 
    const char* ap     = "anil";
    const char* pass = "anil4321";
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
