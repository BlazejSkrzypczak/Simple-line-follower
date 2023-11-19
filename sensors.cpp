#include <avr/io.h>

#include "sensors.hpp"

void sensors_config(){
  DDRB &= ~(1<<PB0); 
  DDRB &= ~(1<<PB1);
}
bool detect_line_SensorR(){
  if(PINB & (1<<PB0)){
    return false;
  }
  else if(!(PINB & (1<<PB0))){
    return true;
  }
}

bool detect_line_SensorL(){
  if(PINB & (1<<PB1)){
    return true;
  }
  if(!(PINB & (1<<PB1))){
    return false;
  }
}
