#include "PWMInputs.h"
#include "Arduino.h"

void frc::PWMInputs::addInput(int id)
{
  _inputs.add(&id);
  inputCount++;
}

void frc::PWMInputs::clearInputs()
{
  _inputs.clear();
  inputCount = 0;
}

frc::PWMInputsPacket frc::PWMInputs::generatePacket(int id)
{
 frc::PWMInputsPacket packet{(int)pulseIn(*_inputs.get(id), HIGH)};

  return packet;
}
