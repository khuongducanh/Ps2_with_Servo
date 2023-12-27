#include "Lib.h"

namespace main{
  namespace Button{   
    void setup(){
        pinMode(BUTTON1,INPUT_PULLUP);
        pinMode(BUTTON2,INPUT_PULLUP);
    }  
    bool kiemtranutnhan(int Pin){
      if(digitalRead(Pin)==0){
        delay(50);
      }if(digitalRead(Pin)==0){
        return true ;
        } return false ;
        while(digitalRead(Pin)==0);
    }
  }
}