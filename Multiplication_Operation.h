#ifndef MULTIPLICATION_OP
#define MULTIPLICATION_OP

#include "Binary_Command.h"

// Multiples two ints and returns value
class Multiplication_Operation : public Binary_Command {
  public:
    Multiplication_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
};

#include "Multiplication_Operation.cpp"

#endif
