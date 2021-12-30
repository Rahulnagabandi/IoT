#define BLYNK_TEMPLATE_ID "TMPLoYPhYXP2"
#define BLYNK_DEVICE_NAME "2"


#define BLYNK_FIRMWARE_VERSION        "3.6.8"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"
BLYNK_WRITE(V0){
int pinValue1 = param.asInt();
digitalWrite(D5,pinValue1);

}
BLYNK_WRITE(V1){
int pinValue2 = param.asInt();
digitalWrite(D6,pinValue2);  
}
BLYNK_WRITE(V2){
int pinValue3 = param.asInt();
digitalWrite(D7,pinValue3);  
}
BLYNK_WRITE(V3){
int pinValue4 = param.asInt();
digitalWrite(D8,pinValue4);  
}
void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
