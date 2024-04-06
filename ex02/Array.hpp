#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cstdio>
#include <cmath>


template< typename T>
class Array
{
    Array();
    Array(unsigned int n);
    Array(Array const & copy);
    ~Array();

    Array & operator =(Array const & src);
    Array & operator []
};