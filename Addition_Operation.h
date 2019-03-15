// Addition Operation Header File

#ifndef ADDITION_OP
#define ADDITION_OP

#include "Binary_Command.h"

// Subclass adds arguments 
class Addition_Operation : public Binary_Command {
  public:
    Addition_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
  private:
    Stack<int> stack;
};

#include "Addition_Operation.cpp"

#endif
