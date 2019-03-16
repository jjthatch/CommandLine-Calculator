// Number Definitions
Number::Number(Stack <int> & s, int num) :
s_(s),
i_(num) {}

void Number::execute() {
  s_.push(i_);
}
