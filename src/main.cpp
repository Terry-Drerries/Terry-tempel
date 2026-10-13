#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  Serial.println("Saus test");
}

void loop(){
  digitalWrite(2, HIGH);
  Serial.println("Saus test");
}
