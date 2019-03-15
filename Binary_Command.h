#ifndef BINARY_COMMAND
#define BINARY_COMMAND

#include "Command.h"

// Template Class for Binary expressions.
class Binary_Command : public Command {
public:
  Binary_Command(Stack <int> & s);
  void execute();
  virtual int calculate(int num1, int num2) const  = 0;
protected:
  Stack<int> & s_;
};

#include "Binary_Command.cpp"

#endif
