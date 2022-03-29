#pragma once

#include "stdint.h"
#include <LinkedList.h>

namespace frc
{
  typedef union
  {
    uint64_t num;
    uint8_t data[8];
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