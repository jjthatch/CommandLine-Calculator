//I pledge to not help or receive help from others during this assignment

#include "Queue.h"

/// Constructor
template <typename T>
Queue <T>::Queue(void) 
{
  this->max_size_ = 10;
  this->data_ = new T[this->max_size_];
}

/// Copy Constructor
Queue <T>::Queue(const Queue & s)
{

}

/// Adds elements
template <typename T>
void Queue<T>::enqueue(T element)
{
  if (size() == this->max_size_)
  {
     
  }
}

/// Removes element
template <typename T>
void Queue<T>::dequeue(void)
{
  // Do A thing
}

/// Checks if queue is empty
template <typename T>
bool Queue<T>::is_empty(void)
{
  // Do A thing
}

/// Number of elements utilized in the queue
template <typename T>
int size(void)
{
  // Do A thing
}

/// Removes all values from the queue
template <typename T>
void clear(void)
{
  // Do another thing
}

/// Increases Queue size by a factor of 10
template <typename T>
void Queue<T>::bigger(void) {
  this->max_size_ = this->max_size_ * 10;
  T * temp = new T[this->max_size_];
  for (int i = 0; i < this->cur_size_; i++) 
  {
    temp[i] = this->get(i);
  } 
  delete [] this->data_;
  this->data_ = temp;
}

template <typename T>
const Queue & Queue<T>::operator = (const Queue & rhs)
{

}
