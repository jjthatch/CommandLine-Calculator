// Number Definitions
Number_Command::Number_Command(Stack <int> & s, int num) :
s_(s),
i_(num) {}

std::string Number_Command::iAm() 
{
	return "Some number"; 
}

void Number_Command::execute() {
  s_.push(i_);
}
