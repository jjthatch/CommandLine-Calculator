// Factorio Conveyor Belts
	Addition_Operation * Factorio::buildAddition(Stack<int> calcZone) 
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
	Modulus_Operation * Modulus(Stack<int> calcZone)
	{
		return new Modulus_Operation(calcZone);
	}
	LeftParenthesis_Command * Factorio::buildLParenthesis() 
	{
		return new LeftParenthesis_Command();
	}
	RightParenthesis_Command * Factorio::buildRParenthesis()
	{
		return new RightParenthesis_Command();
	}
	Number_Command * Factorio::buildNumber(Stack<int> calcZone, int num)
	{
		return new Number_Command(calcZone, num); 
	}
