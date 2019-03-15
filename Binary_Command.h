#ifndef BINARY_COMMAND
#define BINARY_COMMAND

// Template Class for Binary expressions.
class Binary_Command : public Command {
public:
  void execute();
  virtual int calculate(int num1, int num2);
protected:
  Stack<int> & s_;
};

#include "Binary_Command.cpp"

#endif
