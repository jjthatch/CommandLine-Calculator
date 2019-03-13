//I pledge to not help or receive help from others during this assignment

#include "Queue.h"

/// Constructor
template <typename T>
Queue <T>::Queue(void)
{
  this->max_size_ = 10; // tracks output position for queue
  inbound = 0; // Tracks input position for queue
  outbound = 0; // Tracks output position for the queue
  this->data_ = new T[this->max_size_];
}

/// Copy Constructor
template <typename T>
Queue <T>::Queue(const Queue & s)
{
  this->cur_size_ = s->size();
  this->max_size_ = s->max_size();
  this->data_ = new T[s->max_size()];
  for (int i = 0; i < s->size(); i++)
    {
      *(this->data + i) = s->get(i);
    }
}

/// Adds elements
template <typename T>
void Queue<T>::enqueue(T element)
{
  if (size() == this->max_size_)
  {
    this->bigger();
  }
  *(this->data_ + inbound) = element;\
  inbound++;
}

/// Removes element
template <typename T>
void Queue<T>::dequeue(void)
{
  // What is a thing?
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
  // Do The thign
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
  this->cur_size_ = s->size();
  this->max_size_ = s->max_size();
  this->data_ = new T[s->max_size()];
  for (int i = 0; i < s->size(); i++)
    {
      *(this->data + i) = s->get(i);
    }
}

