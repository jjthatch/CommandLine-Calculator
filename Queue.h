// I pledge not to help or receive help from people during assignment

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Array.h"
#include <string>
#include <exception>

template <typename T>
class Queue
{
public:
  // Default constructor
  Queue (void);

  // Copy Consturctor
  Queue(const Queue & s);

  // Desstructor
  ~Queue(void);

  // Assignment =
  const Queue & operator = (const Queue & rhs);

  void enqueue(T element);

  T dequeue(void);

  bool is_empty(void);

  int size(void);

  void clear(void);

  // A useful exception handling class
  class Empty : public std::exception
  {
  public:
    const char* what() const throw() 
    {
      return "The queue is empty";
    }
  };

private:
  // Allows for resizing
  Array<T> arr_;  
  size_t inbound_;
  size_t outbound_;
  bool empty_;
  size_t stacksize_;
};

#include "Queue.cpp"

#endif
