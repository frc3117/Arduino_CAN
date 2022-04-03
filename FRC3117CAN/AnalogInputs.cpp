#include "AnalogInputs.h"
#include "Arduino.h"

void frc::AnalogInputs::addInput(int id)
{
  _inputs.add(&id);
  inputCount++;
}

void frc::AnalogInputs::clearInputs()
{
  _inputs.clear();
  inputCount = 0;
}

frc::AnalogInputsPacket frc::AnalogInputs::generatePacket(int id)
{
  frc::AnalogInputsPacket packet{analogRead(*_inputs.get(id))};
  
  return packet;
}
