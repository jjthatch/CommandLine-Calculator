// Command superclass

#ifndef COMMAND
#define COMMAND

class Command {

public:
  virtual void execute() = 0;
  virtual int calculate(int num1, int num2) const = 0;
};

#endif
