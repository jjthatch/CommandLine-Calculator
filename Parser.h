#ifndef PARSER
#define PARSER

// Command includes
#include "Command.h"
#include "Number_Command.h"
#include "LeftParenthesis_Command.h"
#include "RightParenthesis_Command.h"
#include "Binary_Command.h"
#include "Addition_Operation.h"
#include "Subtraction_Operation.h"
#include "Division_Operation.h"
#include "Subtraction_Operation.h"
#include "Modulus_Operation.h"

// Factory, String, Data structure includes
#include <string>
#include "UpperCommandFactory.h"
#include "Factorio.h"
#include <stdexcept>
#include <sstream>
#include "Stack.h"
#include "Queue.h"

class Parser {
public:
	Parser();
	void toPostfix(Queue<Command *> & commandList, Stack<int> & bucket, std::string input);
	bool isInt(std::string possibleInteger);
private:
	Factorio factory;	
};

#include "Parser.cpp"

#endif
