#define CALCULATOR
#ifndef CALCULATOR 

class Calculator {
public:
	Calculator();
	Queue<Command *> & parseInput(Queue<Command *> & commandList, Stack<int> bucket);
	void calculate();
	void printResult; 
private:
	Queue<Command *> commandList_; 
	Stack<int> finalCountdown_;
	Parser percy_;
};


#include "Calculator.cpp"
#endif
