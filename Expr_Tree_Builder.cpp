#include "Expr_Tree_Builder.h"

// Composite object inclues
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Division_Node.h"
#include "Multiplication_Node.h"
#include "Modulus_Node.h"
#include "Number_Node.h"

// Error catching
#include <stdexcept>
Expr_Node & Expr_Tree_Builder::getRoot()
{
	return *( postfix.top() );
}
void Expr_Tree_Builder::buildAddition()
{
	inboundNode = new Addition_Node();

	try {	
		while (inboundNode->getPrecedence() <= tempStack.top()->getPrecedence())
		{
			// Pops off a swap node from the temp stack then attaches children to it from postfix
			// Finally, it is pushed onto postfix stack.
			swap = tempStack.top();
			tempStack.pop(); 
			swap->setRight( postfix.top() );
			postfix.pop();
			swap->setLeft( postfix.top() );
			postfix.pop();			
			postfix.push(swap);			
		}
	} catch (std::exception& e) {			
		tempStack.push(inboundNode);
	}
	if (inboundNode ->getPrecedence() > tempStack.top()->getPrecedence())
	{
		tempStack.push(inboundNode);
	}	
}
void Expr_Tree_Builder::buildSubtraction()
{
	inboundNode = new Subtraction_Node();

	while (inboundNode->getPrecedence() <= tempStack.top()->getPrecedence())
	{	
		// Pops off a swap node from the temp stack then attaches children to it from postfix
		// Finally, it is pushed onto postfix stack.
		swap = tempStack.top();
		tempStack.pop(); 
		swap->setRight( postfix.top() );
		postfix.pop();
		swap->setLeft( postfix.top() );
		postfix.pop();
		postfix.push(swap);						
	}
				
	if (tempStack.is_empty())
	{
		tempStack.push(inboundNode);
	}
	else if (inboundNode ->getPrecedence() > tempStack.top()->getPrecedence())
	{
		tempStack.push(inboundNode);
	}
}
void Expr_Tree_Builder::buildMultiplication()
{
	inboundNode = new Multiplication_Node();

	try {	
		while (inboundNode->getPrecedence() <= tempStack.top()->getPrecedence())
		{
			// Pops off a swap node from the temp stack then attaches children to it from postfix
			// Finally, it is pushed onto postfix stack.
			swap = tempStack.top();
			tempStack.pop(); 
			swap->setRight( postfix.top() );
			postfix.pop();
			swap->setLeft( postfix.top() );
			postfix.pop();			
			postfix.push(swap);			
		}
	} catch (std::exception& e) {			
		tempStack.push(inboundNode);
	}
	if (inboundNode ->getPrecedence() > tempStack.top()->getPrecedence())
	{
		tempStack.push(inboundNode);
	}	
}
void Expr_Tree_Builder::buildDivision()
{
	inboundNode = new Division_Node();	

	while (inboundNode->getPrecedence() <= tempStack.top()->getPrecedence())
	{	
		// Pops off a swap node from the temp stack then attaches children to it from postfix
		// Finally, it is pushed onto postfix stack.
		swap = tempStack.top();
		tempStack.pop(); 
		swap->setRight( postfix.top() );
		postfix.pop();
		swap->setLeft( postfix.top() );
		postfix.pop();
		postfix.push(swap);			
	}
				
	if (tempStack.is_empty())
	{
		tempStack.push(inboundNode);
	}
	else if (inboundNode ->getPrecedence() > tempStack.top()->getPrecedence())
	{
		tempStack.push(inboundNode);
	}	
}
void Expr_Tree_Builder::buildModulus()
{
	inboundNode = new Modulus_Node();

	while (inboundNode->getPrecedence() <= tempStack.top()->getPrecedence())
	{	
		// Pops off a swap node from the temp stack then attaches children to it from postfix
		// Finally, it is pushed onto postfix stack.
		swap = tempStack.top();
		tempStack.pop(); 
		swap->setRight( postfix.top() );
		postfix.pop();
		swap->setLeft( postfix.top() );
		postfix.pop();
		postfix.push(swap);			
	}
				
	if (tempStack.is_empty())
	{
		tempStack.push(inboundNode);
	}
	else if (inboundNode ->getPrecedence() > tempStack.top()->getPrecedence())
	{
		tempStack.push(inboundNode);
	}	
}
void Expr_Tree_Builder::buildNumber(int num)
{
	postfix.push( new Number_Node(num) );		
}
void Expr_Tree_Builder::complete()
{
	while ( !tempStack.is_empty() )
	{
		swap = tempStack.top();
		tempStack.pop();
		swap->setRight( postfix.top() );
		postfix.pop();
		swap->setLeft( postfix.top() );
		postfix.pop();
	}
	postfix.push(swap);
}
