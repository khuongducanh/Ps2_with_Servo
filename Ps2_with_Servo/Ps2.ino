#include "Lib.h"

namespace main{
  PS2X ps2x;
  int up, down , right , left,green,blue,red,pink , r1 , r2 ,l1 , l2 ,l3,r3;//button
  int doctrai,ngangtrai,docphai,ngangphai;                                  //analog
  int error = 0;
  byte type = 0;
  byte vibrate = 0;
  namespace Ps2{
      void Read_Ps2(){
        ps2x.read_gamepad(false, vibrate);
        up =   ps2x.Button(PSB_PAD_UP);
        down = ps2x.Button(PSB_PAD_DOWN);
        right = ps2x.Button(PSB_PAD_RIGHT);
        left  = ps2x.Button(PSB_PAD_LEFT) ;
        r1 = ps2x.Button( PSB_R1) ;
        r2 = ps2x.Button( PSB_R2) ;
        l1 = ps2x.Button( PSB_L1) ;
        l2 = ps2x.Button( PSB_L2) ;
        l3 = ps2x.Button( PSB_L3) ;
        r3 = ps2x.Button( PSB_R3) ;
        green =  ps2x.Button(PSB_GREEN) ;
        blue =   ps2x.Button(PSB_BLUE) ;
        red =    ps2x.Button(PSB_RED) ;
        pink =   ps2x.Button(PSB_PINK) ;
        doctrai   =  ps2x.Analog(PSS_LY); // read left stick
        ngangtrai =  ps2x.Analog(PSS_LX); // read left stick
        docphai   =  ps2x.Analog(PSS_RY); // read right stick
        ngangphai =  ps2x.Analog(PSS_RX); // read right stick
        doctrai   = map(doctrai  ,0,255,1023,-1023);
        ngangtrai = map(ngangtrai,0,255,1023,-1023);
        docphai   = map(docphai  ,0,255,1023,-1023);
        ngangphai = map(ngangphai,0,255,1023,-1023);
    }

    void controller_ps2(){
      error = ps2x.config_gamepad(CLK,CMD,CS,DAT,false,false); //setup pins and settings:  GamePad(clock, command, attention, data, Pressures?, Rumble?) check for error
      type = ps2x.readType();
      switch (type){
        case 0:
          main ::Lcd::Display_string(0,0,"Mode:");
          main ::Lcd::Display_string(0,1,"Ps2:disconected");
        break;

        case 1:
          main ::Lcd::Display_string(0,0,"Mode:");
          main ::Lcd::Display_string(0,1,"Ps2 : conected");
        break;
      }
      if(error==1){
          return;
      }else{
          main ::Ps2:: Read_Ps2();
          ps2x.read_gamepad(false, vibrate);  
          main :: Servo_config ::dieukhientruc1(pink,red);
          main :: Servo_config ::dieukhientruc2(green,blue);
          main :: Servo_config ::Snap(l1,r1);
      }
      delay(50);
    }
  }
}