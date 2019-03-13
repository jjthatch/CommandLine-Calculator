//I pledge to not help or receive help from others during this assignment

#include "Queue.h"

/// Constructor
template <typename T>
Queue <T>::Queue(void) : 
arr_(10), 
inbound_(0), 
outbound_(0),
empty_(true)
{}

/// Copy Constructor
template <typename T>
Queue <T>::Queue(const Queue & s) :
arr_(s.arr_),
inbound_(s.inbound_),
outbound_(s.outbound_)
{}

/// Adds elements
template <typename T>
void Queue<T>::enqueue(T element)
{
  if ((inbound_ == outbound_) && (arr.is_empty() == false) ) {
    arr.resize(arr.size() * 10);
  }
  arr[inbound_ % arr.max_size()] = element;
  inbound_++;
  stacksize_++;
  empty_ = false;
}

/// Dequeue :  removes element form queue
template <typename T>
void Queue<T>::dequeue(void)
{
  if ( (inbound_ % arr.max_size()) == (outbound_ % arr.max_size()) )
  { 
    empty_ = true;
    throw(empty_exception());
  }
  outbound_++;
  stacksize_--;
  if ( (inbound_ % arr.max_size()) == (outbound_ % arr.max_size()) )
  {
    empty_ = true;
  }
}

/// Checks if queue is empty
template <typename T>
bool Queue<T>::is_empty(void)
{
  return empty_;
}

/// Number of elements utilized in the queue
template <typename T>
int size(void)
{
  return stacksize_; 
}

/// Removes all values from the queue
template <typename T>
void clear(void)
{
  inbound_ = 0;
  outbound_ = 0;
  empty_ = true;
}


template <typename T>
const Queue & Queue<T>::operator = (const Queue & rhs)
{
  this->cur_size_ = s->size();
  this->max_size_ = s->max_size();
  this->data_ = new T[s->max_size()];
  for (int i = 0; i < s->size(); i++)
    {
      *(this->data + i) = s->get(i);
    }
}

