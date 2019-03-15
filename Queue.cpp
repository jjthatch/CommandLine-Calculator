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

/// Destructor
template <typename T>
Queue<T>::~Queue(void) {}

/// Adds elements
template <typename T>
void Queue<T>::enqueue(T element)
{
  if ((inbound_ % arr_.size() == outbound_ % arr_.size()) && (is_empty() == false) ) {
    arr_.resize(arr_.size() * 10);
  }
  arr_[inbound_ % arr_.size()] = element;
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
  if ( (inbound_ % arr_.max_size()) == (outbound_ % arr_.max_size()) )
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
int Queue<T>::size(void)
{
  return stacksize_;
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
