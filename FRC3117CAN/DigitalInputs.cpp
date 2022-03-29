#include "DigitalInputs.h"
#include "Arduino.h"

void frc::DigitalInputs::addInput(int id)
{
  _inputs.add(&id);
}

void frc::DigitalInputs::clearInputs()
{
  _inputs.clear();
}

frc::DigitalInputsPacket frc::DigitalInputs::generatePacket(bool reversed)
{
  frc::DigitalInputsPacket packet{0};
  
  for(int i = 0; i < _inputs.size(); i++)
  {
    packet.num |= (digitalRead(*_inputs.get(i)) != reversed) << i;
  }

  return packet;
}
