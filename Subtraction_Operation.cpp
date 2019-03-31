Subtraction_Operation::Subtraction_Operation(Stack <int> & s) : Binary_Command(s) {}

int Subtraction_Operation::calculate(int num1, int num2) const
{
  return(num2 - num1);
}
