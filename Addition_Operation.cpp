// Addition cpp

Addition_Operation::Addition_Operation(Stack <int> & s) : Binary_Command(s) {}

int Addition_Operation::calculate(int num1, int  num2) const 
{
  return(num2 + num1);
}
