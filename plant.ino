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
