#ifndef CALCULATOR 
#define CALCULATOR

#include "Parser.h"

class Calculator {
public:
	Calculator();
	void execute();
	void parseInput(std::string & input);
	void calculate();
	void printResult();
	void clearData(); 
private:
	Queue<Command *> commandList_; 
	Stack<int> finalCountdown_;
	Parser * percy_;
};


#include "Calculator.cpp"
#endif
