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

// STD Language includes
#include <iostream>


int main (int argc, char * argv [])
{
	// Some node test	
	Stack<Expr_Node *> node;
	Expr_Node * noodles = new Addition_Node();
	
	// Builder Pattern Test
	Expr_Tree_Builder bob;
	bob.buildNumber(5);
	bob.buildAddition();
	bob.buildNumber(4);
	bob.buildSubtraction();
	bob.buildNumber(3);
	bob.buildMultiplication();
	bob.buildNumber(8);
	bob.buildDivision();
	bob.buildNumber(3);
	bob.complete();			

	// Visitor visits bobs tree
	Expr_Tree_Visitor visit;

	// Tree is visited and result is built		
	Expr_Node & temp = bob.getRoot();
	temp.accept(visit);

	// Print out result
	std::cout << "The result is " << visit.getResult() << std::endl;
		
	//std::cout << "Result it " << visit.getResult() << std::endl;
	std::cout << "It compiled! " << std::endl;


}
