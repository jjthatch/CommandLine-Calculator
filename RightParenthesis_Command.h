#ifndef RPARENT
#define RPARENT


#include "Command.h"

class RightParenthesis_Command : public Command
{
public:
	std::string iAm() 
	{
		return ")";
	}
	void execute()
	{
		// NOTHING
	}
};

#endif
