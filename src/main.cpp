#include <Arduino.h>
#include <blink.h>

void setup() {
  Blink blink(2);
  blink.start();
  // voor EEUWIG blinken...
}

void loop(){}