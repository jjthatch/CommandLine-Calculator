#ifndef LPARENT
#define LPARENT

#include "Command.h"
#include <string>

class LeftParenthesis_Command : public Command
{
public:
	LeftParenthesis_Command() {}
	virtual std::string iAm() {
		return "(";
	}
	void execute() {
		std::cout << "Please don't execute the left parenthesis" << std::endl;
	}
	
};

#endif
