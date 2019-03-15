Division_Operation::Division_Operation(stack <int> & s) : Binary_Command(s) {}

int Division_Operation::calculate(int num1, int num2)
{
  return(num1 / num2);
}
