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

// STD Language includes
#include <iostream>


// #include "Expr_Visitor"
// #include "Expr_Tree_Visitor"


int main (int argc, char * argv [])
{
	
	Stack<Expr_Node *> node;
	Expr_Node * noodles = new Addition_Node();
	
	//std::cout << "Noodles precedence is " << noodles->getPrecedence() << std::endl;
	std::cout << "It compiled! " << std::endl;


}
