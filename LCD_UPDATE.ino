#include <LiquidCrystal.h>

LiquidCrystal lcd (RS, EN, D7, D6, D5, D4);

void LCD_inti()
{
  lcd.begin (16, 4);
  lcd.clear();
}

void LCD_main() //menu principale, du choix des solution
{
  lcd.setCursor(0, 0);
  lcd.print("name quantity ml");
  lcd.setCursor(13, 1);
  lcd.print("ml");
  lcd.setCursor(13, 2);
  lcd.print("ml");
  lcd.setCursor(0, 3);
  lcd.print("next   +-   prev");
  print_Menu();
}

void LCD_fill() //message pendant le rechargement  
{
  lcd.setCursor(0, 0);
  lcd.print("  please wait.  ");
  lcd.setCursor(0, 1);
  lcd.print("fill in progress");
  lcd.setCursor(0, 1);
  lcd.print("  SVP attendez  ");
  lcd.setCursor(0, 1);
  lcd.print("  rechargement  ");
}

void LCD_empty() // message pendant la distribution de la solution.
{
  lcd.setCursor(0, 0);
  lcd.print("  please wait.  ");
  lcd.setCursor(0, 1);
  lcd.print("distrib progress");
  lcd.setCursor(0, 1);
  lcd.print("  SVP attendez  ");
  lcd.setCursor(0, 1);
  lcd.print("  distribution  ");
}

void print_Menu(){
switch(product){
    case solution_1:
      lcd.setCursor(0, 1);
      lcd.print(Name_1);
      lcd.setCursor(0, 2);
      lcd.print(Name_2);
    break;
    case solution_2:
      lcd.setCursor(0, 1);
      lcd.print(Name_2);
      lcd.setCursor(0, 2);
      lcd.print((String)Name_3);
    break;
    case solution_3:
      lcd.setCursor(0, 1);
      lcd.print(Name_3);
      lcd.setCursor(0, 2);
      lcd.print(Name_4);
    break;
    case solution_4:
      lcd.setCursor(0, 1);
      lcd.print(Name_4);
      lcd.setCursor(0, 2);
      lcd.print(Name_5);
    break;
    case solution_5:
      lcd.setCursor(0, 1);
      lcd.print(Name_5);
      lcd.setCursor(0, 2);
      lcd.print(Name_1);
    break;
  }
}
