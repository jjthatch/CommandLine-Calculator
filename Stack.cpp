// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
{
  this->data_ = new T;
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
  this->cur_size_ = stack.size();
  this->data_ = new T[];
  for (int i = 0; i < this->cur_size_; i++) {
    *(this->data_ + i) = stack[i];
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
  if (this->data_ != nullptr) {
    delete  this->data_;
    this->data_ = nullptr;
  }
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
  this->set(this->cur_size_ - 1, element);
  this->cur_size_ = this->cur_size_ + 1;
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
  delete (this->data_ + this->cur_size_);
  this->cur_size_ = this->cur_size_ - 1;
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
  this->cur_size_ = stack.size();
  this->data_ = new T;
  for (int i = 0; i < this->cur_size_; i++) {
    *(this->data_ + i) = rhs[i];
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
  for (int i = 0; i < this->cur_size_; i++) {
    delete (this->data_ + i);
  }
}
