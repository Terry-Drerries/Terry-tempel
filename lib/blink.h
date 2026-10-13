#ifndef BLINK_H
#define BLINK_H
#include <cstdint>
#endif

class Blink
{
  public:
    Blink(uint8_t pin_num);
    void now(void);

  private:
    uint8_t _pin;
    int timeout_time;
};
