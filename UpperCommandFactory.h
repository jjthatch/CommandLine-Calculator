#ifndef SKY_FACTORY
#define SKY_FACTORY

// Command Pattern includes
#include "Addition_Operation.h"
#include "Subtraction_Operation.h"
#include "Multiplication_Operation.h"
#include "Division_Operation.h"
#include "Modulus_Operation.h"
#include "LeftParenthesis_Command.h"
#include "RightParenthesis_Command.h"
#include "Number_Command.h"

// Extra datatypes
#include <string> 

class UpperCommandFactory
{
public:	
	virtual ~UpperCommandFactory(); // Default Destructor
	// Factory 1 schematics for Binary Expressions
	virtual Addition_Operation * buildAddition(Stack<int> calcZone) = 0;
	virtual Subtraction_Operation * buildSubtraction(Stack<int> calcZone) = 0;
	virtual Multiplication_Operation * buildMultiplication(Stack<int> calcZone) = 0;
	virtual Division_Operation * buildDivision(Stack<int> calcZone) = 0;
	virtual Modulus_Operation * buildModudulus(Stack<int> calcZone) = 0;
	virtual LeftParenthesis_Command * buildLParenthesis() = 0;
	virtual RightParenthesis_Command * buildRParenthesis() = 0;
	virtual Number_Command * buildNumber(Stack<int> calcZone) = 0; 
};

#endif 
