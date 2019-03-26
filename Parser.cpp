Parser::Parser() 
{
	factory = new Factorio(); 
}

void Parser::toInfixToken(Queue<Command *> & CommandList, Stack<int> bucket, );
{	
	// Set to true when number is scanned, IF false when operator scanned, then NOT VALID
	bool numberBefore = false;
	// count ensures that all right parenthesis has a left
	int leftParents = 0;
	// When true, after numcommand is added, an operator will be swapped from stack to commandlist
	bool precedented = false;
	
	// Temporary Stack to temporarily store operators
	Stack<Command *> temp();
 
	// User inputs into string. 
	std::string input;
	std::cout << "Please enter your expression \n :" << ;
	std::getline(std::cin, input);
	
	std::istringstream expression(input);

	// 
	std::string operatorToken;
	int operandToken = 0;
	

	while (!input.eof())
	{
		// First checks if it's an int that can be parsed as an operand
		if (cin >> operandToken) 
		{
			CommandList.queue( factory.buildNumber(bucket, operandToken) );
			if (precedented == true) 
			{
				CommandList.enqueue( temp.top() );
				temp.pop();
			}
		}
		// IF it isn't an int it sees if it is an operator and parses accordingly
		else if (cin >> stringtoken)
		{	
			switch (stringtoken)
			{
				case "+": 
					temp.push( factory.buildAddition(bucket) );
					break;	
				case "-":
					temp.push( factory.buildSubtraction(bucket) );
					break;
				case "/":
					precedented = true;
					temp.push( factory.buildDivision(bucket) );
					break;
				case "*":
					precedented = true;
					temp.push( factory.buildMultiplication(bucket) );
					break;
				case "%":
					precedented = true;
					temp.push( factory.buildModulus );
					break;
				case "(":
					if (precedented == true)
						precedented = false;
					temp.push( factory.buildLParenthesis );
					leftParents++;
					break;
				case ")":
					// Continues to transfer stack to queue until Lparnenthesis found. Then pops that parenthesis too
					if (leftParents <= 0)
					{
						throw std::invalid_argument("Invalid Expression");	
					}
					while  ( (temp.top())->iAm() != ")" ) 
				  	{
						CommandList.enqueue( temp.top() );
						temp.pop();
					}
					temp.pop();
					leftParents--;	
				default: 
					throw std::invalid_argument("Invalid Expression");
			}	
		}
		// Add rest of temporary stack to queue AFTER expression is parsed
		while (!temp.is_empty())
		{
			CommandList.enqueue( temp.top() );
			temp.pop();
		} 	
	}
}
