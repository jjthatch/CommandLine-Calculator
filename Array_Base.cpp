#include <stdexcept>
#include "Array_Base.h"
/*
  CONSTRUCTORS
*/

// Default Constructor
template <typename T>
Array_Base <T>::Array_Base (void)
{
  data_ = nullptr;
}

// Constructor param length
template <typename T>
Array_Base <T>::Array_Base (size_t length)
{
  data_ = new T[length];
  max_size_ = length;
  cur_size_ = length;
}

// Construct param length and fill
template <typename T>
Array_Base <T>::Array_Base (size_t length, T fill)
{
  int countsize = 0;
  data_ = new T[length];
  max_size_ = length;
  for (int i = 0; i < length; i++) {
    *(data_ + i) = fill;
    countsize++;
  }
  cur_size_ = countsize;
}

// Copy Constructor
template <typename T>
Array_Base <T>::Array_Base (const Array_Base & array)
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

// Destructor
template <typename T>
Array_Base <T>::~Array_Base (void)
{
  delete [] data_;
  data_ = nullptr;
}

/*
  PUBLIC METHODS
*/

/// size and max_size functions are in INLINE file

//
// get (index)
//
template <typename T>
T Array_Base<T>::get(size_t index) const {
  return *(data_ + index);
}

//
// find (value)
//
template  <typename T>
int Array_Base <T>::find (T value) const
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
// find (value, starting element)
//
template <typename T>
int Array_Base <T>::find (T val, size_t start) const
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
// set
//
template <typename T>
void Array_Base <T>::set (size_t index, T value)
{
  if ((index < 0) || (index >= this->cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    *(this->data_ + index) = value;
  }
}

//
// fill
//
template <typename T>
void Array_Base <T>::fill (T value)
{
  for (int i = 0; i < this->max_size_; i++) {
    *(this->data_ + i) = value;
  }
}

//
// reverse
//
template <typename T>
void reverse (void) {

}

//
// slice (begin)
//

template <typename T>
Array_Base<T> Array_Base<T>::slice (size_t begin) const {


}
//
// slice (begin, end)
//

template <typename T>
Array_Base<T> Array_Base<T>:: slice (size_t begin, size_t end) const {

}

/*
  OPERATOR OVERLOADING
*/

//
// Operator =
//
template <typename T>
const Array_Base <T> & Array_Base <T>::operator = (const Array_Base & rhs)
{
  delete[] data_;
  data_ = rhs.data_;
  cur_size_ = rhs.size();
  max_size_ = rhs.max_size();
  return * this;
}

//
// Operator ==
//
template <typename T>
bool Array_Base <T>::operator == (const Array_Base & rhs) const
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
bool Array_Base <T>::operator != (const Array_Base & rhs) const
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
// operator []
//
template <typename T>
const T & Array_Base<T>::operator [] (size_t index) const
{
  if ( (index < 0) || (index >= cur_size_) )
    {
      throw(std::out_of_range("Index is out of bounds"));
    }
  else
    {
      return *(data_ + index);
    }
}

//
// operator [] modifiable
//
template <typename T>
T & Array_Base<T>::operator [] (size_t index)
{
  if ((index < 0) || (index >= this->cur_size_)) {
    throw(std::out_of_range("Index is out of bounds"));
  }
  else {
    return *(data_ + index);
  }
}
