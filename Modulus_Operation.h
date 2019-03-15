#ifndef MODULUS_OP
#define MODULUS_OP

#include "Binary_Command.h"

class Modulus_Operation : public Binary_Command {
  public:
    Modulus_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
};

#include "Modulus_Operation.cpp"

#endif
