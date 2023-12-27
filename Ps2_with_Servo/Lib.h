//include Library
   #include <PS2X_lib.h> 
   #include <Servo.h>
   #include <LiquidCrystal.h>
//BUTTON
  #define BUTTON1 2 
  #define BUTTON2 3 

//CAMBIENTIEMCAN
  #define CAMBIENTIEMCAN 5 
//CANHTAY
  #define SERVODEXOAY 6
  #define SERVOTRUC1 7
  #define SERVOGAP1 8
  #define SERVOGAP2 10
//AMTHANH
  #define SPEAKER 14 
//LCD
  #define RS 22
  #define EN 23
  #define D4 24
  #define D5 25
  #define D6 26
  #define D7 27
//PS2
  #define DAT 44
  #define CMD 36
  #define CS  38
  #define CLK 40
//BANGTAI
  #define DONGCO 43     
//

namespace main{
  namespace Button{
    void setup();
    bool kiemtranutnhan(int Pin);
  }

  namespace Sensor{
    void setup();
    bool kiemtracambien(int Pin);
  }

  namespace Speaker{
    void setup();
    void Sound(int Duty_Cycle ,int Time);
    void Stop_Tone();
  }
  
  namespace Motor{
    void setup();
    void Run();
    void Stop();
  }

  namespace Servo_config{
    void setup();
    void Reset_Servo(int servo_1 , int servo_2 , int servo_3 , int servo_4 , int num_1 , int num_2);
    void dieukhientruc1(int button1, int button2);
    void dieukhientruc2(int button1, int button2);
    void Snap(int button1, int button2);
  }

  namespace Ps2{
    void Read_Ps2();
    void controller_ps2();
  }

  namespace Lcd{
    void setup();
    void Display_string(int column , int row , char str[100]);
    void Display_number(int column,int row,int number);
  }

  namespace Config{
    void setup();
    void Mode();
    void Conveyor();
  }
}