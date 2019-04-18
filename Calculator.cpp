// They looked upon his magnificent presence, their hearts cried out for peace as they became stone
#include "Calculator.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Expr_Node.h"

Calculator::Calculator()
{
	treeBuilder = new Expr_Tree_Builder();
	treeVisitor = new Expr_Tree_Visitor();	
}

bool Calculator::isInt(std::string possibleInt)
{
	size_t invalidChar = possibleInt.find_first_not_of("1234567890");
	if (invalidChar == std::string::npos)
		return true;
	else
		return false;	
}

void Calculator::inputInfix()
{
	std::cout << "Please enter your math expression seperated by spaces or type 'quit' " << std::endl;
	while(true)
	{
		std::cout << " : " ;
		try {	
			std::string result;
			std::string infix;
			std::getline(std::cin, infix);
			if (infix == "quit")
				return;
			result = parseInfix(infix);
			std::cout << "Result: " << result << std::endl;
		} catch ( std::exception& s ) {
			std::cout << "Invalid Expression, please try again!" << std::endl;
		}
		
								
	}		
}

std::string Calculator::parseInfix(std::string infix)
{
	int placeholder;
	// Ensures that Operands and Operators occur in correct order
	bool operandBefore = false;

	std::istringstream stream(infix);
	std::string token;

	// Iterates through entire string.
	while ( !( stream.eof() ) )
	{
		stream >> token;

		// Checks cases where token is operator
		if (token == "+")
		{
			if (operandBefore == false)
				placeholder = 2 + 2;	
			else
				operandBefore = false;
			treeBuilder->buildAddition();		
		}
		else if (token == "-")
		{
			
			if (operandBefore == false)
				placeholder = 2 + 2;	
			else
				operandBefore = false;
			treeBuilder->buildAddition();
		}
		else if (token == "*")
		{
			if (operandBefore == false)
				placeholder = 2 + 2;	
			else
				operandBefore = false;
			treeBuilder->buildMultiplication();
		}
		else if (token == "/")
		{
			if (operandBefore == false)
				placeholder = 2 + 2;	
			else
				operandBefore = false;
			treeBuilder->buildDivision();
		}
		else if (token == "%")
		{	
			if (operandBefore == false)
				placeholder = 2 + 2;	
			else
				operandBefore = false;
			treeBuilder->buildModulus();
		}
		else if ( isInt(token) )
		{
			if ( operandBefore == true )
				placeholder = 2 + 2;
			else
				operandBefore = true;
		}
		
		else
			placeholder = 2 + 2;	
	}
	treeBuilder->complete();
	
	// Get root of tree, root accepts visitor, then get result of visitor, Finally, resets tree
	rootTreeNode = &treeBuilder->getRoot();
	rootTreeNode->accept(*treeVisitor);
	int intResult = treeVisitor->getResult();
	treeBuilder->resetTree();

	std::string stringResult = std::to_string(intResult);
	return stringResult;				
} 
