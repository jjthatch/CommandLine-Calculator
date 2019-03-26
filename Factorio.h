#ifndef CONCRETE_FACTORY
#define CONCRETE_FACTORY

#include "UpperCommandFactory.h"
class Factorio : UpperCommandFactory
{
public: 
//
	virtual ~Factorio(); 
	virtual Addition_Operation * buildAddition(Stack<int> calcZone);
	virtual Subtraction_Operation * buildSubtraction(Stack<int> calcZone);
	virtual Multiplication_Operation * buildMultiplication(Stack<int> calcZone);
	virtual Division_Operation * buildDivision(Stack<int> calcZone);
	virtual Modulus_Operation * buildModulus(Stack<int> calcZone);
	virtual LeftParenthesis_Command * buildLParenthesis();
	virtual RightParenthesis_Command * buildRParenthesis();
	virtual Number_Command * buildNumber(Stack<int> calcZone, int num); 
};

#include "Factorio.cpp"

#endif
