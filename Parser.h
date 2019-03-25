#define PARSER
#ifndef PARSER

class Parser {
public:
	Parser();
	void toPostfix(Queue<Command *> & commandList, Stack<int> bucket);
private:
	BinaryFactory mathetorio;
					
};

#include "Parser.cpp"

#endif
