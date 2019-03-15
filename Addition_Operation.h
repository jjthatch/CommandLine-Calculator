class Addition_Operation : public Binary_Command {
  public:
    Addition_Operation (Stack <int> & s);
    int calculate(int num1, int num2);
};
