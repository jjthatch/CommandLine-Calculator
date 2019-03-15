// Binary_Command definitions
void Binary_Command::execute()
{
  int n1 = s_.pop();
  int n2 = s_.pop();
  int temp = calculate(n1, n2);
  s_.push(temp);
}
