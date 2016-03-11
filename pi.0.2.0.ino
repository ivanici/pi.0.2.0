#include "defs.h"

void setup() {
  initializeMotors();
  LCD_inti();

  state = main;
  
  Serial.begin(9600);
  Serial.print("Serial begin 9600 open");

  product = solution_1;
}

void loop() {
   switch(state){
     case main:
        LCD_main();
        change_menu();
        menu_selctSolution();      
     break;
     case empty:
        LCD_empty();
     break;
     case fill:
        LCD_fill();
     break;
  }
}
