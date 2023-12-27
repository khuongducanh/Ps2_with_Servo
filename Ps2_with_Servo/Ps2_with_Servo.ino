#include "Lib.h"

void setup() {
  Serial.begin(9600);
  main ::Config::setup();
}

void loop() {
  main ::Config::Mode();
  main ::Config::Conveyor();
  
}
