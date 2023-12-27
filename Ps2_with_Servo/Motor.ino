#include "Lib.h"

namespace main{
  namespace Motor{
    void setup(){
      pinMode(DONGCO,OUTPUT);
    }
    
    void Run(){
      digitalWrite(DONGCO,HIGH);
    }

    void Stop(){
      digitalWrite(DONGCO,LOW);
    }
  }
}