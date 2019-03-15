
// Subtracts and returns value
class Subtraction_Operation : public Binary_Command {
  public:
    Subtraction_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
};
