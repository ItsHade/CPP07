#pragma once

#include <iostream>
#include <string>

template < typename T >
void iter(T *array, size_t const length, void (*ptr)(T &))
{
    for (size_t i = 0; i < length; i++)
        ptr(array[i]);
}

template < typename T >
void printTemplate(T & t)
{
    std::cout << t << std::endl;
}
