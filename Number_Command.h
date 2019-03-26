#ifndef NUMBER_H
#define NUMBER_H

#include "Command.h"

class Number_Command {
public:
  Number_Command(Stack <int> & s, int num);
  int iAm(); 
  void execute();
protected:
  Stack<int> & s_;
  int i_;
};

#include "Number_Command.cpp"
#endif
