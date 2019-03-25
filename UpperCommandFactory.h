#ifndef SKY_FACTORY
#define SKY_FACTORY


#include "Addition_Operation.h"
#include "Subtraction_Operation.h"
#include "Multiplication_Operation.h"
#include "Division_Operation.h"
#include "Modulus_Operation.h"
#include "Left_Parenthesis_Command.h"
#include "Right_Parenthesis_Command.h"
#include "Number_Command.h"
#include <string> 

class AbstractCommandFactory()
{	
	virtual ~UpperCommandFactory()
	// Factory 1 schematics for Binary Expressions
	virtual Addition_Operation * buildAddition(std::string op) = 0;
	virtual Subtraction_Operation * buildSubtraction(std::string op) = 0;
	virtual Multiplication_Operation * buildMultiplication(std::string op) = 0;
	virtual Division_Operation * buildDivision(std::string op) = 0;
	virtual Modulus_Operation * buildModudulus(std::string op) = 0;
	virtual Left_Parenthesis * buildLParenthesis(std::string parent) = 0;
	virtual Right_Parenthesis * buildRParenthesis(std::string parent) = 0;
	virtual Number_Command * buildNumber(int num) = 0; 
};

#endif 
