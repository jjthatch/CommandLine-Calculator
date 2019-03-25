Calculator::Calculator()
{
	// Not really sure how to use an initializor list with this kind of construction
	percy = new Parser();
}

void Calculator::parseInput(Queue<Command *> & commandList, Stack<int> bucket)
{
	percy.toPostfix(commandList, bucket);
}

void Calculator::calculate() 
{
	while ( !(commandList_.is_empty()) ) 
	{
		( commandList_.dequeue() ).execute();
	}	
}

void Calculator::printResult()
{
	std::cout << "Result: " << finalCountdown_.top() << std::endl; 
}
