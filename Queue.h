// I pledge not to help or receive help from people during assignment

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Array.h"

template <typename T>
class Queue
{
public:
  // Default constructor
  Queue (void);

  // Copy Consturctor
  Queue(const Queue & s);

  // Destructor
  ~Queue(void);

  // Assignment =
  const Queue & operator = (const Queue & rhs);

  void enqueue(T element);

  void dequeue(void);

  bool is_empty(void);

  int size(void);

  void clear(void);

  // A useful exception handling class
  class empty_exception : public std::exception
  {
  public:
    /// Default constructor.
  empty_exception (void)
    : std::exception () { }
    
    /// Messaging... constructor
  empty_exception (const char * msg)
    : std::exception (msg) { }
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
