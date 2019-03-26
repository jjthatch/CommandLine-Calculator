#ifndef LPARENT
#define LPARENT

#include "Command.h"
#include <string>

class LeftParenthesis_Command : Command
{
public:
	LeftParenthesis_Command() {}
	std::string iAm() {
		return "(";
	}
	void execute() {
		// NOTHING EXISTS
	}
	
};

#endif
