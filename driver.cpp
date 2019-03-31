#include "Array_Base.h"
#include "Array.h"
#include <string>
#include "Stack.h"
#include "Queue.h"
#include "Command.h"
#include <iostream>
// Commands
#include "Command.h"
#include "Binary_Command.h"
#include "Addition_Operation.h"
#include "Subtraction_Operation.h"
#include "Division_Operation.h"
#include "Multiplication_Operation.h"
#include "Subtraction_Operation.h"
#include "Modulus_Operation.h"
#include "Number_Command.h"
#include "RightParenthesis_Command.h"
#include "LeftParenthesis_Command.h"
// Factory and client
#include "Calculator.h"
#include "Parser.h"
#include "UpperCommandFactory.h"
#include "Factorio.h"

int main (int argc, char * argv [])
{	
	// Calculator is created, which also, created a parser automatically. Which means madness is going to happen.
	Calculator simplecalc;
	simplecalc.execute();		

	/* Manual Example	
	Stack<int> nums;
	Queue<Command *> temp;
	Factorio factory;
	temp.enqueue(factory.buildNumber(nums, 3));
	temp.enqueue(factory.buildNumber(nums, 3));
	temp.enqueue(factory.buildAddition(nums));
	temp.dequeue()->execute(); // should Execute and push 3 to stack
	std::cout << nums.top() << std::endl;
	temp.dequeue()->execute();
	std::cout << nums.top() << std::endl;
	temp.dequeue()->execute();
	std::cout << nums.top() << std::endl;
	*/

	// CELEBRATION
	std::cout << "It compiled" << std::endl;
	std::cin.ignore();
	return 0;
}
