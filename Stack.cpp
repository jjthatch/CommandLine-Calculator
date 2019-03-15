// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack Default Constructor
//
template <typename T>
Stack <T>::Stack (void) : arr(10), top_(0) {}

//
// Stack Copy Constructor
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
  arr = stack.arr;
}

//
// ~Stack destruct
//
template <typename T>
Stack <T>::~Stack (void) {}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
  arr[top_++] = element;
}

//
// pop
//
template <typename T>
T Stack <T>::pop (void)
{
  if (top_ == 0) 
    {
      throw(empty_exception());
    }
  top_ = top_ - 1;
  return top_;
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
  arr = rhs.arr;
  return this;           
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
  top_ = 0;
}
