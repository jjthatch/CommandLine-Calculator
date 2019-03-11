// I pledge not to help or receive help from people during assignment

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Array_Base.h"

template <typename T>
<<<<<<< HEAD
class Queue : public Base_Array <T>
=======
class Queue : public Array_Base <T>
>>>>>>> cfb49baea81766e8070e594259148cc96065e180
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
private:
  // Allows for resizing
  void bigger(void);
  size_t inbound;
  size_t outbound;
};

#include "Queue.cpp"

#endif
