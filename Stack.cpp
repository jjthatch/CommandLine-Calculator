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
  data_ = new T;
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
  this->cur_size_ = stack.size();
  data_ = new T[this->cur_size_];
  for (int i = 0; i < this->cur_size_; i++) {
    *(data_ + i) = array[i];
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
  if (data_ != nullptr) {
    delete  data_;
  }
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{

}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{

}
