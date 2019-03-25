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

	/*
	// Telling the teacher what in the worlds going on
	std::cout << "BEHOLD \n I will now tranform THIS POSTFIX OPERATION!" << std::endl;
	std::cout << "4 12 8 8 2 5 + - x / % " << std::endl;
	std::cout << "Into a solution using only a stack and command objects. FEAR MY POWER" << std::endl;
	
	
	
	
 
	// Creating a stack
	Stack<int> test;
	std::cout << "Loading up the queue" << std::endl;
	Queue<Command *> choochoo;

		
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
	

	choochoo.enqueue(new Addition_Operation());
		
	choochoo.enqueue(new Subtraction_Operation());

	choochoo.enqueue(new Multiplication_Operation());

	choochoo.enqueue(new Division_Operation());
			
	choochoo.enqueue(new Modulus_Operation());
	
	*/	
// Now we EXECUTE THEM ALL, HNGHHHHH
	/*
	while (!choochoo.is_empty())
	adder.execute();
	subber.execute();
	multer.execute();
	divider.execute();
	moder.execute();
	*/

	// NOW WE LOOK AT THE RESULT. AND THE CARD ISSSSS?!?!!
	//std::cout << test.top() << std::endl;


	// CELEBRATION
	std::cout << "It compiled" << std::endl;
	std::cin.ignore();
	return 0;
}
