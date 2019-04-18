// Container structures
#include "Array_Base.h"
#include "Stack.h"
#include "Queue.h"

// Composite Pattern Objects
#include "Division_Node.h"
#include "Addition_Node.h"
#include "Multiplication_Node.h"
#include "Subtraction_Node.h"
#include "Modulus_Node.h"
#include "Binary_Node.h"
#include "Expr_Node.h"
#include "Number_Node.h"

// Visitor Pattern Objects
#include "Expr_Visitor.h"
#include "Expr_Tree_Visitor.h"

// Builder Pattern Objects
#include "Expr_Builder.h"
#include "Expr_Tree_Builder.h"

#include "Calculator.h"

// STD Language includes
#include <iostream>


int main (int argc, char * argv [])
{
	Calculator calculator;
	calculator.inputInfix();	
		
	//std::cout << "Result it " << visit.getResult() << std::endl;
	std::cout << "It compiled! " << std::endl;


}
