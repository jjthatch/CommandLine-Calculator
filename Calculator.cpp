Calculator::Calculator()
{
	// Not really sure how to use an initializor list with this kind of construction
	percy_ = new Parser();
}

void Calculator::parseInput()
{
	percy_->toPostfix(commandList_, finalCountdown_);
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
