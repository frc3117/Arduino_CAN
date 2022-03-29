#include "Arduino.h"
#include "DigitalInputs.h"

frc::DigitalInputs inputs;

void setup()
{
  Serial.begin(9600);
  
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  
  inputs.addInput(3);
  inputs.addInput(4);
}

void loop()
{
  Serial.println((long)inputs.generatePacket(false).num, BIN);
}
