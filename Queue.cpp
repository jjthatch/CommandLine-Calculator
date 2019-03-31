//I pledge to not help or receive help from others during this assignment

#include "Queue.h"
#include <stdio.h>

/// Constructor
template <typename T>
Queue <T>::Queue(void) :
arr_(100),
inbound_(0),
outbound_(0),
empty_(true),
max_size_(100),
stacksize_(0)
{}

/// Copy Constructor
template <typename T>
Queue <T>::Queue(const Queue & s) :
arr_(s.arr_),
inbound_(s.inbound_),
outbound_(s.outbound_)
{}

/// Destructor
template <typename T>
Queue<T>::~Queue(void) {}

/// Adds elements
template <typename T>
void Queue<T>::enqueue(T element)
{
  // IF FULL
  if ( stacksize_ == max_size_ ) {
    T * temp = new T[max_size_];
    for (int i = 0; i < max_size_; i++)
    {
      *(temp + i) = dequeue();    
    } 
    arr_.resize(max_size_ * 10);
    // Temp array values filled into main queue then destroyed
    for (int i = 0; i < max_size_; i++)
    {
      enqueue(*(temp + i));
    }
    max_size_ = (max_size_ * 10);
    delete[] temp;
  }
  // ELSE
  arr_[inbound_ % max_size_] = element;
  inbound_++;
  stacksize_++;
  empty_ = false;
}

/// Dequeue :  removes element form queue
template <typename T>
T Queue<T>::dequeue(void)
{
  if (empty_) {
    Empty e;
    throw e;
  }
  outbound_++;
  stacksize_--;
  if (stacksize_ == 0) 
  {
    empty_ = true;
  }
   T temp = arr_[ (outbound_ - 1) % max_size_ ];
   return temp;
}

/// Checks if queue is empty
template <typename T>
bool Queue<T>::is_empty(void)
{
  return empty_;
}

/// Number of elements utilized in the queue
template <typename T>
int Queue<T>::size(void)
{
  return stacksize_;
}

/// Number of elements allowed in the queue
template <typename T>
int Queue<T>::max_size(void)
{
  return max_size_;
}

/// Removes all values from the queue
template <typename T>
void Queue<T>::clear(void)
{
  inbound_ = 0;
  outbound_ = 0;
  empty_ = true;
}


template <typename T>
const Queue<T> & Queue<T>::operator = (const Queue & rhs)
{
  this->cur_size_ = rhs->size();
  this->max_size_ = rhs->max_size();
  this->data_ = new T[rhs->max_size()];
  for (int i = 0; i < rhs->size(); i++)
    {
      *(this->data + i) = rhs->get(i);
    }
}
