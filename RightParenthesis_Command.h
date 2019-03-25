#define RPARENT
#ifndef RPARENT

#include "Command.h"

class RightParenthesis_Command : Command
{
	std::stirng whatAmI()
	{
		return ")";
	}
private:
	void execute() {
		// NOTHING EXISTS
	}
	int calculate(int num1, int num2) {
		// BE THE NOTHIGN
	}
};

#endif
