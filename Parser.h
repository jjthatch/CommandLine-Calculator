#define PARSER
#ifndef PARSER

#include <string>
#include "UpperCommandFactory.h"
#include "Factorio.h"
#include <stdexcept>

class Parser {
public:
	Parser();
	void toPostfix(Queue<Command *> & commandList, Stack<int> bucket);
private:
	Factorio factory;	
};

#include "Parser.cpp"

#endif
