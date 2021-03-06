#pragma once

#include "stdint.h"
#include <LinkedList.h>

namespace frc
{
  typedef union
  {
    int32_t num;
    uint8_t data[4];
  } AnalogInputsPacket;
  
  class AnalogInputs
  {
    public:
    void addInput(int id);
    void clearInputs();

    AnalogInputsPacket generatePacket(int id);

    int inputCount;

    private:
    LinkedList<int*> _inputs = LinkedList<int*>();
  };
}