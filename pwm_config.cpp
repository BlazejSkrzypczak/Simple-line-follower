#include <avr/io.h>
#include "pwm_config.hpp"

void pwm_config(){
  DDRD |= (1<<PD6);
  DDRD |= (1<<PD5);
  TCCR0A |= (1<<WGM01)|(1<<WGM00);
  TCCR0A |= (1<<COM0A1)|(1<<COM0A0);
  TCCR0A |= (1<<COM0B1)|(1<<COM0B0);
  TCCR0B |= (1<<CS01);
  OCR0A = 1;
  OCR0B = 1;
}
