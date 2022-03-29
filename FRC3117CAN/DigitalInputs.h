#pragma once

#include "stdint.h"
#include <LinkedList.h>

namespace frc
{
  typedef union
  {
    uint64_t num;
    uint8_t data[8];
  } DigitalInputsPacket;
  
  class DigitalInputs
  {
    public:
    void addInput(int id);
    void clearInputs();

    DigitalInputsPacket generatePacket(bool reversed);

    private:
    LinkedList<int*> _inputs = LinkedList<int*>();
  };
}
