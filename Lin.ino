#include <avr/io.h>

#include "motors.hpp"
#include "pwm_config.hpp"
#include "sensors.hpp"

int main(){

  pwm_config();
  sensors_config();
  motors_config();

  while(1){

    if(detect_line_SensorR() && !detect_line_SensorL()){
      right();
    }
    if(!detect_line_SensorR() && detect_line_SensorL()){
      left();
    }

  }
  return 0;
}

