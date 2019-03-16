Division_Operation::Division_Operation(Stack <int> & s) : Binary_Command(s) {}

int Division_Operation::calculate(int num1, int num2) const
{
  return(num1 / num2);
}
