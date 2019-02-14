// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array <T>::Array (void)
{
  data_ = nullptr;
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
{
  data_ = new T[length];
  max_size_ = length;
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
{
  int i = 0;
  data_ = new T;
  max_size_ = length;
  for (int i = 0; i < length; i++) {
    *(data_ + i) = fill;
  }
  cur_size_ = i;
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
    data_ = new T[this->max_size_];
    for (int i = 0; i < this->max_size_; i++) {
      *(data_ + i) = array[i];
    }
  }
}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
  delete[] data_;
  data_ = nullptr;
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
  delete[] data_;
  this->data_ = rhs.data_;
  return * this;
}

//
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index){
  if ((index < 0) || (index >= cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    return *(data_ + index);
  }
}

//
// operator []
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
  if ((index < 0) || (index >= cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    return *(data_ + index);
  }
}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const
{
  if ((index < 0) || (index >= cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    return *(data_ + index);
  }
}

//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value)
{
  if ((index < 0) || (index >= cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    *(data_ + index) = value;
  }
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
  // When the array lengthens, max size changes only
  if (new_size > max_size_) {
    Array newarray(new_size);
    for (int i = 0; i < new_size; i++) {
      newarray[i] = *(data_ + i);
    }
    this->max_size_ = new_size;
    delete [] data_;
    data_ = newarray;
  }
  // If the array shrinks below cur_size_ then cur has to shrink as well
  else if (new_size < max_size_) {
    Array newarray(new_size);
    this->max_size_ = new_size;
    if (new_size < cur_size_) {
      this->cur_size_ = new_size;
    }
    for (int i = 0; i < max_size_; i++) {
      newarray[i] = *(data_ + i);
      delete [] data_;
      data_ = newarray;
    }
  }
}

//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const
{
  int found = 0;
  int intstart = 0;
  int index = -1;
  for (int i = 0; i < cur_size_; i++) {
    if (value == *(data_ + i)) {
      if (found != 1) {
        found = 1;
        index = i;
      }
    }
  }
  return index;
}

//
// find (char, size_t)
//
template <typename T>
int Array <T>::find (T val, size_t start) const
{
  int index = -1;
  int found = 0;


  // Validates input and finds the Index
  if (start >= cur_size_) {
    throw std::out_of_range("Index out of bounds of array");
  }
  else {
    for (size_t i = start; i < (cur_size_ - start); i++) {
      if ((val == *(data_ + i)) && (found != 1)) {
        found = 1;
        index = i;
      }
    }
  }
  return index;
}

//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
  bool equality = true;
  if ((cur_size_ == rhs.size()) && (cur_size_ == rhs.max_size())) {
    equality = false;
  }
  else {
    for (int i = 0; i < cur_size_; i++) {
      if (*(data_ + i) != rhs[i]) {
        equality = false;
      }
    }
  }
}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{
  if ((cur_size_ != rhs.cur_size_) || (max_size_ != rhs.max_size)) {
    return true;
  }
  else {
    for (int i = 0; i < cur_size_; i++) {
      if (*(data_ + i) == rhs[i]) {
        return false;
      }
    }
  }
}

//
// fill
//
template <typename T>
void Array <T>::fill (T value)
{
  for (int i = 0; i < max_size_; i++) {
    *(data_ + i) = value;
  }
}
