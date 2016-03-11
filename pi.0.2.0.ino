#include "defs.h"

void setup() {
  initializeMotors();

  state = main;
  
  Serial.begin(9600);
  Serial.print("Serial begin 9600 open");

  
}

void loop() {
  updateJoystickInformation();
  
  switch(state){
    case main:
      //LCD_main();
    break;
    case empty:
      //LCD_empty();
    break;
    case fill:
      //LCD_fill();
    break;
  }
}
