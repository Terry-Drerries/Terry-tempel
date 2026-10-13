#include <Arduino.h>
#include "blink.h"
void Blink::start(void){
  while (1)
  {
    digitalWrite(this->_pin,  HIGH);
    delay(this->timeout_time);
    digitalWrite(this->_pin, LOW);
    delay(this->timeout_time);
  }
};

Blink::Blink(uint8_t pin_num){
      this->_pin = pin_num;
      pinMode(pin_num, OUTPUT);
    }
