// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

/*
  CONSTRUCTORs
*/

//
// Array
//
template <typename T>
Array <T>::Array (void)
{
  this->data_ = nullptr;
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
{
  this->data_ = new T[length];
  this->max_size_ = length;
  this->cur_size_ = length;
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
{
  int countsize = 0;
  this->data_ = new T[length];
  this->max_size_ = length;
  for (int i = 0; i < length; i++) {
    *(this->data_ + i) = fill;
    countsize++;
  }
  this->cur_size_ = countsize;
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
{
  if (array.data_ == nullptr) {
    this->data_ = nullptr;
  }
  else {
    this->cur_size_ = array.size();
    this->max_size_ = array.max_size();
    this->data_ = new T[this->max_size_];
    for (int i = 0; i < this->max_size_; i++) {
      *(this->data_ + i) = array[i];
    }
  }
}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
  delete [] this->data_;
  this->data_ = nullptr;
}

/*
  METHODS
*/

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
  // When the array lengthens, max size changes only
  if (new_size >= this->max_size_) {
    T * temp = new T[new_size];
    for (int i = 0; i < this->max_size_; i++) {
      *(temp + i) = *(this->data_ + i);
    }
    this->max_size_ = new_size;
    delete [] this->data_;
    this->data_ = temp;
    temp = nullptr;
  }
  // If the array shrinks below cur_size_ then cur has to shrink as well
  else if (new_size < this->max_size_) {
    this->max_size_ = new_size;
    T * temp = new T[new_size];
    if (new_size < this->cur_size_) {
      this->cur_size_ = new_size;
    }
    for (int i = 0; i < this->max_size_; i++) {
      temp[i] = *(this->data_ + i);
    }
    delete [] this->data_;
    this->data_ = temp;
    temp = nullptr;
  }
}

//
// shrink
//
//  void shrink () {}
