// Binary_Command definitions

Binary_Command::Binary_Command(Stack <int> & s) : s_ (s) {}

void Binary_Command::execute() 
{
  int n1 = s_.pop();
  int n2 = s_.pop();
  int temp = calculate(n1, n2);
  s_.push(temp);
}

// int Binary_Command::calculate(int num1, int num2) const {}
