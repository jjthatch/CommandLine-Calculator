// I pledge not to help or receive help from people during assignment

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Array.h"
#include "Queue.cpp"

template <typename T>
class Queue : public Base_Array <T>
{
public:
  // Default constructor
  Queue (void);

  void enqueue(T element);

  void dequeue(void);

  bool is_empty(void);

  int size(void);

  void clear(void);

}



#endif
