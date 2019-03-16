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
#include "Division_Operation.h"
#include "Multiplication_Operation.h"
#include "Subtraction_Operation.h"
#include "Modulus_Operation.h"
#include "Number_Command.h"

int main (int argc, char * argv [])
{

	// Telling the teacher what in the worlds going on
	std::cout << "BEHOLD \n I will now tranform THIS POSTFIX OPERATION!" << std::endl;
	std::cout << "4 12 8 8 2 5 + - x / % " << std::endl;
	std::cout << "Into a solution using only a stack and command objects. FEAR MY POWER" << std::endl;

	// Creating a stack
	Stack<int> test;

	// Pushing number on stack
	test.push(5);
	test.push(2);
	test.push(8);
	test.push(8);
	test.push(12);
	test.push(4);

	// Now we create commands
        Addition_Operation adder(test);
	Subtraction_Operation subber(test);
	Multiplication_Operation multer(test);
	Division_Operation divider(test);
	Modulus_Operation moder(test);
			
	// Now we EXECUTE THEM ALL, HNGHHHHH
	adder.execute();
	subber.execute();
	multer.execute();
	divider.execute();
	moder.execute();

	// NOW WE LOOK AT THE RESULT. AND THE CARD ISSSSS?!?!!
	std::cout << test.top() << std::endl;

	std::cout << "Since we're so happy about things compiling and working, I'm going to divide by 0 now" << std::endl;
	// Now for shits and giggle let's divide by 0
	Stack<int> test2;
	test2.push(0);
	test2.push(3);
	Division_Operation anotherdivider(test2);
	anotherdivider.execute();
	std::cout << test2.top() << std::endl;

	// CELEBRATION
	std::cout << "It compiled" << std::endl;
	std::cin.ignore();
	return 0;
}
