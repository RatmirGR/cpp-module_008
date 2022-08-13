#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>

Array<T>::Array():array(0), _size(0){}

template <typename T>
Array<T>::Array(unsigned int size): _size(size)
{
    array = new T[size];
}

template <typename T>
Array<T>::Array(const Array<T> &array)
{
    *this = array;
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &other)
{
    if (this->array)
        delete[] this->array;
    this->_size = other._size;
    this->array = new T[this->_size];
    for (int i = 0; i < this->_size; i++)
        this->array[i] = other.array[i];
    return *this;
}

template <typename T>
T&  Array<T>::operator[](const int idx)
{
    if (idx < 0 || idx >= (int)this->_size)
        throw Array::OutOfRangeException();
    else
        return this->array[idx];
}
template <typename T>
unsigned int Array<T>::getSize(void) const {
    return (this->_size);
}



template <typename T>
const char	*Array<T>::OutOfRangeException::what(void) const throw()
{
    return "Error: Array out of range";
}

#endif
