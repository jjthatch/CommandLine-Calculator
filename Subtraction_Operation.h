#ifndef SUBTRACTION_OP
#define SUBTRACTION_OP

#include "Binary_Command.h"

// Subtracts and returns value
class Subtraction_Operation : public Binary_Command {
  public:
    Subtraction_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
};

#include "Subtraction_Operation.cpp"

#endif
