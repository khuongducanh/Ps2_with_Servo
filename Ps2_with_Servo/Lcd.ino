#include "Lib.h"

namespace main{
  LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
  namespace Lcd{
    void setup(){
      lcd.begin(16,2);
    }
    void Display_string(int column , int row , char *str){
      lcd.setCursor(column,row);
      lcd.print(str);
    }

    void Display_number(int column,int row,int number){
      lcd.setCursor(column,row);
      lcd.print(number);
    }
  }
}