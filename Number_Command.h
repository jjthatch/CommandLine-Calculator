#ifndef NUMBER_H
#define NUMBER_H

#include "Command.h"
#include <string>

class Number_Command : public Command {
public:
  Number_Command(Stack <int> & s, int num);
  std::string iAm(); 
  void execute();
protected:
  Stack<int> & s_;
  int i_;
};

#include "Number_Command.cpp"
#endif
