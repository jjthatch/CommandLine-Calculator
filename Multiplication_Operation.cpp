Multiplication_Operation::Multiplication_Operation(Stack <int> & s) : Binary_Command(s) {}

int Multiplication_Operation::calculate(int num1, int num2) const
{
  return(num1 * num2);
}
