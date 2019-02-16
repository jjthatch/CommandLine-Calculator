// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
{
	this->data_ = new T[N];
	this->max_size_ = N;
	this->cur_size_ = 0;
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
{
  // Only copies elements that have been initialized. Won't copy garbage data
  this->cur_size_ = arr.size();
  this->max_size_ = arr.max_size();
  this->data_ = new T[arr.max_size()];
  for (int i = 0; i < this->cur_size; i++) {
    *(this->data_ + i) = arr.get(i);
	}
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
{
	// Chooses the larger of the sizes given and sets maxsize.
	if (M < N) {
		this->max_size_ = M;
		this->data_ = new T[M];
		this->cur_size_ = 0; // Not a copy, so, no elements initialized yet!
	}
	else {
		this->max_size_ = N;
		this->data_ = new T[N];
		this->cur_size_ = 0;
	}
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
	this->data_ = new T[N];
	this->max_size_ = N;
	this->cur_size_ = N;
	for (int i = 0; i < N; i ++) {
		*(this->data_ + i) = fill;
	}
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	delete [] this->data_;
	this->data_ = nullptr;
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
	delete[] this->data_;
  this->data_ = rhs;
	this->cur_size_ = rhs.size();
  return * this;
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
	if (M != N) {
		throw std::invalid_argument("Invalid operation, arrays are not the same size");
	}
	delete[] this->data_;
	this->data_ = rhs;
	this->cur_size = rhs.size();
  return * this;
}
