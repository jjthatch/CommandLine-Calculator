void Calculator::execute()
{

	std::cout << "Please enter your math expression separated by spaces or type 'quit' " << std::endl;
	while(true)
	{
		std::cout << " : " ;
		// User types math expression, then parser is called to check and parse it.
		try {
		std::string input;
		std::getline(std::cin, input);
		if (input == "quit")
			return;
		parseInput(input);
		calculate();
		printResult();
		} catch (const std::invalid_argument& s) {
			std::cout << "Invalid Expression, please try again" << std::endl;
		}
		clearData();
	}
}
Calculator::Calculator()
{
	// Not really sure how to use an initializor list with this kind of construction
	percy_ = new Parser();
}

void Calculator::parseInput(std::string & input) 
{
	percy_->toPostfix(commandList_, finalCountdown_, input);
}

void Calculator::calculate() 
{
	while ( !(commandList_.is_empty()) ) 
	{
		( commandList_.dequeue() )->execute();
	}	
}

void Calculator::printResult()
{
	std::cout << "Result: " << finalCountdown_.top() << std::endl; 
}

// Must clear data after every iteration.
void Calculator::clearData()
{
	finalCountdown_.clear();
	commandList_.clear();
}
