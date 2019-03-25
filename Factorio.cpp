// Factorio Conveyor Belts
	Addition_Operation * Fatorio::buildAddition(Stack<int> calcZone) 
	{
		return new Addition_Operation(calcZone);	
	}
	Subtraction_Operation * Factorio::buildSubtraction(Stack<int> calcZone)
	{
		return new Subtraction_Operation(calcZone);
	}
	Multiplication_Operation * Factorio::buildMultiplication(Stack<int> calcZone)
	{
		return new Multiplication_Operation(calcZone);
	}
	Division_Operation * Factorio::buildDivision(Stack<int> calcZone)
	{
		return new Division_Operation(calcZone);
	}
	Modulus_Operation * Factorio::buildModudulus(Stack<int> calcZone)
	{
		return new Modulus_Operation(calcZone);
	}
	Left_Parenthesis_Command * Factorio::buildLParenthesis(Stack<int> calcZone) 
	{
		return new buildLParenthesis();
	}
	Right_Parenthesis_Command * Factorio::buildRParenthesis(Stack<int> calcZone)
	{
		return new buildRParenthesis();
	}
	Number_Command * Factorio::buildNumber(Stack<int> calcZone)
	{
		return new buildNumber(calcZone); 
	}
