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
<<<<<<< HEAD
  delete [] data_;
  data_ = nullptr;
}

=======
  delete [] this->data_;
  this->data_ = nullptr;
}
>>>>>>> cfb49baea81766e8070e594259148cc96065e180

//
// operator [] modifiable
//
template <typename T>
<<<<<<< HEAD
T & Array <T>::operator [] (size_t index){
  if ((index < 0) || (index >= cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    return *(data_ + index);
=======
T & Array <T>::operator [] (size_t index)
{
  if ((index < 0) || (index >= this->cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    return *(this->data_ + index);
>>>>>>> cfb49baea81766e8070e594259148cc96065e180
  }
}


//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value)
{
  if ((index < 0) || (index >= this->cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    *(this->data_ + index) = value;
  }
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
  // When the array lengthens, max size changes only
  if (new_size > this->max_size_) {
    Array newarray(new_size);
    for (int i = 0; i < new_size; i++) {
      newarray[i] = *(this->data_ + i);
    }
    this->max_size_ = new_size;
    delete [] this->data_;
    this->data_ = newarray;
  }
  // If the array shrinks below cur_size_ then cur has to shrink as well
  else if (new_size < this->max_size_) {
    Array newarray(new_size);
    this->max_size_ = new_size;
    if (new_size < this->cur_size_) {
      this->cur_size_ = new_size;
    }
<<<<<<< HEAD
    for (int i = 0; i < max_size_; i++) {
      newarray[i] = *(data_ + i);
      delete [] data_;
      data_ = newarray;
=======
    for (int i = 0; i < this->max_size_; i++) {
      newarray[i] = *(this->data_ + i);
      delete [] this->data_;
      this->data_ = newarray;
>>>>>>> cfb49baea81766e8070e594259148cc96065e180
    }
  }
}

<<<<<<< HEAD


=======
>>>>>>> cfb49baea81766e8070e594259148cc96065e180
//
// fill
//
template <typename T>
void Array <T>::fill (T value)
{
  for (int i = 0; i < this->max_size_; i++) {
    *(this->data_ + i) = value;
  }
}
