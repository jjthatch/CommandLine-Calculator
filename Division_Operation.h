
// Divides and returns value
class Division_Operation : public Binary_Command {
  public:
    Division_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
};
