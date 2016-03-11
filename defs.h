#ifndef COMMON_DEFS
#define COMMON_DEFS

const int D7 = 27; // pin de l'ecrant lcd
const int D6 = 28;
const int D5 = 29;
const int D4 = 30;
const int EN = 31;
const int RS = 32;

const int centerBottom = 33;

const int center_btn = 33; // pin bouton du joystick + état possible.
enum horizontalPosition_t {CENTER_H, LEFT, RIGHT};
enum verticalPosition_t {CENTER_V, TOP, BOTTOM};

enum states {main, empty, fill}; //état (initial, distribution, rechargment).
int state = main;

enum products {BEGIN, solution_1, solution_2, solution_3, solution_4, solution_5, END};
int product = BEGIN;

String Name_1 = ""; //nom des solutions sont a changer pour un affichage correct max 12 lettres.
String Name_2 = "";
String Name_3 = "";
String Name_4 = "";
String Name_5 = "";

float volum_1 = 0;
float volum_2 = 0;
float volum_3 = 0;
float volum_4 = 0;
float volum_5 = 0;

#endif
