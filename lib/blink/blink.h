#ifndef BLINK_H
#define BLINK_H

class Blink
{
  public:
    Blink(uint8_t pin_num);

    void start(void);

  private:
    uint8_t _pin;
    int timeout_time = 100;
};
#endif
