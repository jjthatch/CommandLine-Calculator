// Binary_Command definitions

Binary_Command::Binary_Command(Stack <int> & s) : s_ (s) {}
std::string Binary_Command::iAm() 
{
	return "not )";
}
void Binary_Command::execute() 
{
  int n1 = s_.top();
  s_.pop();
  int n2 = s_.top();
  s_.pop();
  int temp = calculate(n1, n2);
  s_.push(temp);
}

