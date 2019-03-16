Division_Operation::Division_Operation(Stack <int> & s) : Binary_Command(s) {}

int Division_Operation::calculate(int num1, int num2) const
{ 
  if (num2 == 0) {
    throw(std::logic_error("You divided by zero. Now you shall perish.")); 
  }
  return(num1 / num2);
}
