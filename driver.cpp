#include "Array_Base.h"
#include "Array.h"
#include <string>
#include "Stack.h"
#include "Queue.h"
#include "Command.h"
#include <iostream>
#include "Command.h"
#include "Binary_Command.h"
#include "Addition_Operation.h"
#include "Subtraction_Operation.h"
#include "Multiplication_Operation.h"
#include "Subtraction_Operation.h"
#include "Modulus_Operation.h"

int main (int argc, char * argv [])
{
	Stack<int> test;
        Addition_Operation adder(test);		

	std::cout << "It compiled" << std::endl;
	std::cin.ignore();
	return 0;
}
