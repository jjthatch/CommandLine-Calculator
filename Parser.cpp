Parser::Parser() 
{
	Factorio * factory = new Factorio(); 
}

// Returns True if the string token is an integer
bool Parser::isInt(std::string possibleInteger)
{	
	// Return location of first non-integer, otherwise return string::npos
	std::size_t invalidChar = possibleInteger.find_first_not_of("1234567890");
	if (invalidChar == std::string::npos)
		return true;
	else {	
		return false;
	}	
}

void Parser::toPostfix(Queue<Command *> & commandList, Stack<int> & bucket, std::string input)
{	
	// Set to true when number is scanned, IF false when operator scanned, then NOT VALID
	bool numberBefore = false;
	// count ensures that all right parenthesis has a left
	int leftParents = 0;
	// When true, after numcommand is added, an operator will be swapped from stack to commandlist
	bool precedented = false;
	
	// Temporary Stack to temporarily store operators
	Stack<Command *> temp;

	// Used for swapping if "-" is before a higher precedence operator
	int tempstate = 0;
 
	// Input from argument transformed into stringstream to be tokenized
	std::istringstream stream(input);
	std::string token;
	
	while ( !(stream.eof()) )
	{
		stream >> token;
	 
		// First checks if token is int
		if ( isInt(token) ) 
		{
			int tempInt = std::stoi(token); 
			commandList.enqueue( factory.buildNumber(bucket, tempInt) );
			if ( (precedented == true)) 
			{
				commandList.enqueue( temp.top() );
				temp.pop();
				precedented == false;
			}
			if (tempstate == 2) 
			{
				commandList.enqueue( temp.top() );
				temp.pop();
				tempstate = 0;
			}
		}

		// IF it isn't an int it sees if it is an operator and parses accordingly
		else 
		{	
			if (token == "+")
			{ 
				temp.push( factory.buildAddition(bucket) );
			}	
			else if (token == "-")
			{	
				precedented = true;
				tempstate = 1;
				temp.push( factory.buildSubtraction(bucket) );
			}
			else if (token == "/")
			{
				if (tempstate == 1)
				{
					temp.push( commandList.dequeue() );
					temp.push( factory.buildDivision(bucket) );
					tempstate = 2;
					precedented = true;
				}
				else
				{
					precedented = true;
					temp.push( factory.buildDivision(bucket) );
				}
			}
			else if (token == "*")
			{
				if (tempstate == 1)
				{
					temp.push( commandList.dequeue() );
					temp.push( factory.buildMultiplication(bucket) );
					tempstate = 2;
					precedented = true;
				}
				else
				{
					precedented = true;
					temp.push( factory.buildMultiplication(bucket) );
				}
			}
			else if (token == "%")
			{
				if (tempstate == 1)
				{
					temp.push( commandList.dequeue() );
					temp.push( factory.buildModulus(bucket) );
					tempstate = 2;
					precedented = true;
				}
				else
				{
					precedented = true;
					temp.push( factory.buildModulus(bucket) );
				}
			}
			else if (token == "(")
			{
					if (precedented == true)
						precedented = false;
					temp.push( factory.buildLParenthesis() );
					leftParents++;
			}
			else if (token == "(")
			{
					// Continues to transfer stack to queue until Lparnenthesis found. Then pops that parenthesis too
					if (leftParents <= 0)
					{
						throw std::invalid_argument("Invalid Expression");	
					}
					while  ( (temp.top())->iAm() != ")" ) 
				  	{
						commandList.enqueue( temp.top() );
						temp.pop();
					}
					temp.pop();
					leftParents--;
			}	
			else
			{ 
				throw std::invalid_argument("Invalid Expression");
			}	
		}
		// Add rest of temporary stack to queue AFTER expression is parsed
	}
	
	while (!temp.is_empty())
	{
		commandList.enqueue( temp.top() );
		temp.pop();
	} 	
}
