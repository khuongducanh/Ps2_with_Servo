#include "Lib.h"

namespace main{
  namespace Speaker{
    void setup(){
      pinMode(SPEAKER,OUTPUT);
    }
     
    void Sound(int Duty_Cycle ,int Time){
      tone(SPEAKER,Duty_Cycle,Time);
      delay(50);
    }

    void Stop_Tone(){
      noTone(SPEAKER);
    }
  }
}