#define LPARENT
#ifndef LPARENT

#include "Command.h"

class LeftParenthesis_Command : Command
{
	std::string whatAmI() 
	{
		return "(";
	}
private:
	void execute() {
		// NOTHING EXISTS
	}
	int calculate(int num1, int num2) {
		// BE THE NOTHING
	}	

};

#endif
