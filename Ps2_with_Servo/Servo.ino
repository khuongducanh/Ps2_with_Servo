#include "Lib.h"

namespace main{    
  namespace Servo_config{     
      int num1 = 125 ;
      int num2 = 160 ; 
      Servo servo1;
      Servo servo2;
      Servo servo3;
      Servo servo4;

    void setup(){
      servo1.attach(SERVODEXOAY);
      servo2.attach(SERVOTRUC1);
      servo3.attach(SERVOGAP1);
      servo4.attach(SERVOGAP2);  
    }

    void Reset_Servo(int servo_1 , int servo_2 , int servo_3 , int servo_4 , int num_1 , int num_2){
      servo1.write(servo_1); // trục 1 . giảm để xoay vào trong . 125
      servo2.write(servo_2);// trục 2  . giảm để xuống  160
      servo3.write(servo_3);//left 90
      servo4.write(servo_4);//right 70
      num1 = num_1 ;  //125
      num2 = num_2 ;  //160
      delay(50);
    }

  
    void dieukhientruc1(int button1, int button2) {
        if (button1 && !button2) {
          num1 = num1 + 5;
          if (num1 >= 180) {
            num1 = 180;
          }
          servo1.write(num1);
        }
        if (button2 && !button1) {
          num1 = num1 - 5;
          if (num1 <= 0) {
            num1 = 0;
          }
          servo1.write(num1);
      }
    }

    void dieukhientruc2(int button1,int button2) {
        if (button1 && !button2) {
          num2 = num2 + 5;
          if (num2 >= 180) {
            num2 = 180;
          }
          servo2.write(num2);
        }
        if (button2 && !button1) {
          num2 = num2 - 5;
          if (num2 <= 0) {
            num2 = 0;
          }
          servo2.write(num2);
      }
    }

    void Snap(int button1 ,int button2){
   //gắp
      if(button1 && !button2){
        servo3.write(110);
        servo4.write(40);
      }
      //nhả
      if(button2 && !button1){
        servo3.write(50);
        servo4.write(110);
      }
    }
  }
}