#include "defs.h"

horizontalPosition_t horizontalPosition;
verticalPosition_t verticalPosition;

const unsigned int bottomLimit = 400;
const unsigned int topLimit = 1000;
const unsigned int rightLimit = 400;
const unsigned int leftLimit = 1000;

horizontalPosition_t getHorizontalPosition() {
  return horizontalPosition;
}

verticalPosition_t getVerticalPosition() {
  return verticalPosition;
}

void updateJoystickInformation()
{
  int vertical = analogRead(A0);
  int horizontal = analogRead(A1);
  if (vertical > topLimit)
  {
    verticalPosition = TOP; 
  }  
  else if (vertical < bottomLimit)
  {
    verticalPosition = BOTTOM; 
  }
  else
  {
    verticalPosition = CENTER_V;  
  }

  if (horizontal > leftLimit)
  {
    horizontalPosition = LEFT;  
  }
  else if(horizontal < rightLimit)
  {
    horizontalPosition = RIGHT;
  }
  else
  {
    horizontalPosition = CENTER_H;
  }
}

void change_menu(){
  /*
  updateJoystickInformation();
  if (verticalPosition == TOP){
        (int)product--;
  }
  else if (verticalPosition == BOTTOM){
        (int)product++;
  }
  */
}

