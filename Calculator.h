#define CALCULATOR
#ifndef CALCULATOR 

class Calculator {
public:
	Calculator();
	Queue<Command *> & parseInput(Queue< Command * > & commands);
	void calculate();
	void printResult; 
private:
	Queue<Command *> commandList_; 
	Stack<int> finalCountdown_;
	Parser percy_;
};

#endif

#include "Calculator.cpp"
