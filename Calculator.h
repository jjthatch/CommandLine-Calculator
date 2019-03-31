#ifndef CALCULATOR 
#define CALCULATOR

#include "Parser.h"

class Calculator {
public:
	Calculator();
	void parseInput();
	void calculate();
	void printResult(); 
private:
	Queue<Command *> commandList_; 
	Stack<int> finalCountdown_;
	Parser * percy_;
};


#include "Calculator.cpp"
#endif
