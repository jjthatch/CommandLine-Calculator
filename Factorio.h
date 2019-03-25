#ifndef CONCRETE_FACTORY
#define CONCRETE_FACTORY

class Factorio() : UpperCommandFactory
{
public: 
// 
	virtual Addition_Operation * buildAddition(Stack<int> calcZone);
	virtual Subtraction_Operation * buildSubtraction(Stack<int> calcZone);
	virtual Multiplication_Operation * buildMultiplication(Stack<int> calcZone);
	virtual Division_Operation * buildDivision(Stack<int> calcZone);
	virtual Modulus_Operation * buildModudulus(Stack<int> calcZone);
	virtual Left_Parenthesis * buildLParenthesis(Stack<int> calcZone);
	virtual Modulus_Operation * buildModudulus(Stack<int> calcZone);
	virtual Left_Parenthesis * buildLParenthesis(Stack<int> calcZone);
	virtual Right_Parenthesis * buildRParenthesis(Stack<int> calcZone);
	virtual Number_Command * buildNumber(Stack<int> calcZone); 
};

#include "Factorio.cpp"

#endif
