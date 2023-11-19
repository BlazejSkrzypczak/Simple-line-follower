#include <avr/io.h>
#include "motors.hpp"

void motors_config(){
  DDRD |= (1<<PD3)|(1<<PD4); //DC_R - FORWARD DIRECTION
  DDRD |= (1<<PD7)|(1<<PD2);  //DC_L - FORWARD DIRECTION
}

void right(void){
  PORTD |= (1<<PD3);
  PORTD &= ~(1<<PD4);
  PORTD &= ~(1<<PD2);
  PORTD &= ~(1<<PD7); 
}
void left(void){
  PORTD &= ~(1<<PD3);
  PORTD &= ~(1<<PD4);
  PORTD |= (1<<PD2);
  PORTD &= ~(1<<PD7); 
}
