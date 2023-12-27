#include "Lib.h"

namespace main{
  namespace Sensor{
    void setup(){
      pinMode(CAMBIENTIEMCAN,INPUT);
    }
    bool kiemtracambien(int Pin){
      if(digitalRead(Pin)==0)
        return true ;
      return false ;  
    }
  }
}