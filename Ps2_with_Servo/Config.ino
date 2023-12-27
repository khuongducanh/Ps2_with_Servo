#include "Lib.h"

namespace main{
  int dem = 0;
  namespace Config{
    void setup(){
      main ::Button::setup();
      main ::Sensor::setup();
      main ::Speaker::setup();
      main ::Motor  ::setup();
      main ::Servo_config  ::setup();
      main ::Lcd    ::setup();
      
      main ::Motor  ::Stop();
      main ::Servo_config  :: Reset_Servo(125,160,90,70,125,160);
    }

    void Mode(){
      if(main::Button::kiemtranutnhan(BUTTON1)==true){
        dem=1;
        main::Speaker::Sound(1023,125);
      }

      if(main::Button::kiemtranutnhan(BUTTON2)==true){
        dem=2;
        main::Speaker::Sound(1023,125);
      }
      
      switch(dem){
        case 1 :
          main ::Ps2::controller_ps2();
        break;

        case 2 :
          dem = 0;
          main ::Servo_config::Reset_Servo(125,160,90,70,125,160);
        break;    
      }
    } 
     void Conveyor(){
      if(main::Sensor::kiemtracambien(CAMBIENTIEMCAN)==true){
        main ::Motor::Run();
      }else{
        main ::Motor::Stop();
      }
    }
  }
}