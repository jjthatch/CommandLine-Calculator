// Calculate Definition for Modulus Operation
Modulus_Operation::Modulus_Operation(Stack <int> & s) : Binary_Command(s) {}

int Modulus_Operation::calculate(int num1, int num2) {
  return (num1 % num2);
}
