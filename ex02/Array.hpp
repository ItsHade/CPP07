#pragma once

#include <iostream>
#include <string>
#include <cstring> // bzero


template< typename T>
class Array
{

public :

    Array();
    Array(unsigned int const n);
    Array(Array & copy);
    ~Array();

    Array & operator =(Array & src);
    T & operator [](unsigned int const index);
    T const & operator [](unsigned int const index) const;

    unsigned int size() const; 

    class OutOfArrayException : public std::exception {
        public :
            virtual const char* what() const throw();
    };

private :

    //Order of variables maters here
    T *_array;
    unsigned int _size;
};

#include "Array.tpp"