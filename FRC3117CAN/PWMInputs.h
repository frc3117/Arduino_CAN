#pragma once

#include "stdint.h"
#include <LinkedList.h>

namespace frc
{
  typedef union
  {
    int32_t num;
    uint8_t data[4];
  } PWMInputsPacket;
  
  class PWMInputs
  {
    public:
    void addInput(int id);
    void clearInputs();

    PWMInputsPacket generatePacket(int id);

    int inputCount;

    private:
    LinkedList<int*> _inputs = LinkedList<int*>();
  };
}
