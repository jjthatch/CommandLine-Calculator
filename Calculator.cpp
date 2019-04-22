// They looked upon his magnificent presence, their hearts cried out for peace as they became stone
#include <stdexcept>
#include "Calculator.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Expr_Node.h"
#include <set>

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
bool Calculator::isMyAlpha(std::string possibleVariable)
{
	size_t notFound = possibleVariable.find_first_not_of("qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM");
	if (notFound == std::string::npos)
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
			parseVariables(infix);
			result = parseInfix(infix);
			std::cout << "Result: " << result << std::endl;
		} catch ( std::exception& s ) {
			std::cout << s.what() << std::endl;
		}
		
								
	}		
}

std::string Calculator::parseVariables(std::string infix)
{
	std::set<std::string> variablesTemp;
	std::istringstream stream(infix);
	std::string token;
	size_t found;
	std::string swap;

	while ( !( stream.eof() ) )
	{
		stream >> token;
		
		// checks token to see if it could be a variable
		if ( ( !isInt(token) ) && ( token.length() > 1) )
		{
			throw std::invalid_argument("Invalid Variable, Must be a single alpha character.");
		}
		else if ( isMyAlpha(token) )
		{
			variablesTemp.insert(token);
		}
							
	}


	// Now that set is filled up with string variables, the user will define what each variable is, which is then assigned to the map
	std::cout << "The variables you entered are: ";
	for (auto var : variablesTemp)
	{
		std::cout << var << " ";
	}	
	std::cout << std::endl;

	for (auto var : variablesTemp)
	{
		while(true)
		{
			std::cout << "Type the integer value of " << var << " ." << std::endl;
			std::getline(std::cin, swap); 
			if ( isInt(swap) )
			{
				variables[var] = stoi(swap);
				std::cout << "Variable: " << var << " mapped to value: " << swap << std::endl;
				break;	
			}
			else
				std::cout << "You must enter an integer for your variable!" << std::endl;
		}
	}
}

std::string Calculator::parseInfix(std::string infix)
{
	int placeholder;
	int inttoken;
	// Ensures that Operands and Operators occur in correct order
	bool operandBefore = false;

	// Parenthesis implemented  by method passing itself substrings contained with first outer layer of parenthesis
	// Should Throw exceptions if parenthesis are incorrect
	size_t firstPos;
	size_t lastPos;
	std::string subExpr;
	std::string swap;
	firstPos = infix.find_first_of("(");
	if (firstPos != std::string::npos)
	{
		lastPos = infix.find_last_of(")");
		if (lastPos == std::string::npos)
		{
			throw std::invalid_argument("Forgot your closing parenthesis, eh friend?");
		}
		else
		{
			subExpr = infix.substr(firstPos + 2, ( lastPos - firstPos - 3 )  );
			swap = parseInfix(subExpr);
			infix.replace( firstPos, (lastPos - firstPos + 1 ), swap );							
		} 
	} 

	 
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
				throw std::invalid_argument("Operator MUST BE surround by two operands");	
			else
				operandBefore = false;
			treeBuilder->buildAddition();		
		}
		else if (token == "-")
		{
			
			if (operandBefore == false)
				throw std::invalid_argument("Operator MUST BE surround by two operands");	
			else
				operandBefore = false;
			treeBuilder->buildSubtraction();
		}
		else if (token == "*")
		{
			if (operandBefore == false)
				throw std::invalid_argument("Operator MUST BE surround by two operands");
			else
				operandBefore = false;
			treeBuilder->buildMultiplication();
		}
		else if (token == "/")
		{
			if (operandBefore == false)
				throw std::invalid_argument("Operator MUST BE surround by two operands");
			else
				operandBefore = false;
			treeBuilder->buildDivision();
		}
		else if (token == "%")
		{	
			if (operandBefore == false)
				throw std::invalid_argument("Operator MUST BE surround by two operands");
			else
				operandBefore = false;
			treeBuilder->buildModulus();
		}
		else if ( isInt(token) )
		{
			if ( operandBefore == true )
				throw std::invalid_argument("Operator MUST BE surround by two operands");
			else
				operandBefore = true;
			inttoken = stoi(token);
			treeBuilder->buildNumber(inttoken);	
		}
		else if ( isMyAlpha(token) )
		{
			if (operandBefore == true)
				throw std::invalid_argument("Operator must be surrounded by two operands");
			else
				operandBefore = true;
			treeBuilder->buildNumber(variables[token]);
		}	
		else 
			throw std::invalid_argument("Not an operator/operand");
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
