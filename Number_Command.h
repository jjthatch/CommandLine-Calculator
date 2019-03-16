#ifndef NUMBER_H
#define NUMBER_H

#include "Command.h"

class Number {
public:
  Number(Stack <int> & s, int num);
  
  void execute();
protected:
  Stack<int> & s_;
  int i_;
};

#include "Number_Command.cpp"
#endif
