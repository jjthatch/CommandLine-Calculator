// Command superclass

#ifndef COMMAND
#define COMMAND

#include <string>

class Command {

public:
  virtual void execute() = 0;
  virtual std::string iAm() {
    return "Not (";
  }
};

#endif
