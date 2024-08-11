#define BLYNK_TEMPLATE_ID "TMPLN0cZklzj"
#define BLYNK_TEMPLATE_NAME "MoistureCorrect"
#define BLYNK_AUTH_TOKEN "SLxAnuWfMuRyX6B4ySUgtcU_begMxBkT"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define waterPump D4

char auth[]= "SLxAnuWfMuRyX6B4ySUgtcU_begMxBkT";
char ssid[]= "Mac&Cheese";
char pass[]= "tajin5050";
int soilMoistureValue = 0;
int soilmoisturepercent=0;
int AirValue = 616;   
int WaterValue = 335; 
SimpleTimer timer;

void MainFunction() {
soilMoistureValue = analogRead(A0);
//Serial.println(soilMoistureValue);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);

Blynk.virtualWrite(V0, soilmoisturepercent); 
}

void setup() {
 pinMode(D4,OUTPUT);  
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
 timer.setInterval(1000L,MainFunction);
}
void loop() {
Blynk.run();
