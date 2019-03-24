#ifndef SKY_FACTORY
#define SKY_FACTORY


#endif

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
	// Factory 2 schematics for number/parenthesis commands
	virtual Left_Parenthesis * buildLParenthesis(std::string parent) = 0;
	virtual Right_Parenthesis * buildRParenthesis(std::string parent) = 0;
	virtual Number_Command * buildNumber(int num) = 0; 
} 
