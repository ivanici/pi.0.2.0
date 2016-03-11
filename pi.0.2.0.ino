#include "defs.h"

void setup() {
  initializeMotors();
  LCD_inti();

  state = main;
  
  Serial.begin(9600);
  Serial.print("Serial begin 9600 open");

  
}

void loop() {  
  switch(state){
    case main:
      LCD_main();
      incrementVolumValue();
      if(centerBottom == HIGH);
      {
        state = empty;  
      }
    break;
    case empty:
      LCD_empty();
    break;
    case fill:
      LCD_fill();
    break;
  }
}
