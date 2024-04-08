#pragma once

#include "Array.hpp"

template < typename T >
Array<T>::Array() : _array(new T[0]), _size(0)
{
    return ;
}

template < typename T >
Array<T>::Array(unsigned int const n) : _array(new T[n]), _size(n)
{
    bzero(_array, _size * sizeof(T));
    return ;
}

template < typename T >
Array<T>::Array(Array & copy) : _array(new T[0])
{
    *this = copy;
    return ;
}

template < typename T >
Array<T> & Array<T>::operator =(Array &src)
{
    if (this != &src)
    {
        delete[] _array;
        _size = src._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = src._array[i];
    }
    return (*this);
}

template < typename T >
T & Array<T>::operator [](unsigned int const index)
{
    if (index >= _size)
        throw OutOfArrayException();
    return (_array[index]);
}

template < typename T >
T const & Array<T>::operator [](unsigned int const index) const
{
    if (index >= _size)
        throw OutOfArrayException();
    return (_array[index]);
}

template < typename T >
unsigned int Array<T>::size() const
{
    return (_size);
}

template < typename T >
Array<T>::~Array()
{
    delete[] _array;
    return ;
}

template < typename T >
const char * Array<T>::OutOfArrayException::what() const throw()
{
    return ("Index is out of array valid range!");
}

