#include "iter.hpp"

void increment(int & nb)
{
    ++nb;
    return ;
}

void toUpper(char & c)
{
    c = toupper(c);
    return ;
}

int main(void)
{
    char arrayChar[6] = {"hello"};
    std::cout << "Char array: " << std::endl;
    ::iter(arrayChar, 5, printTemplate); // instanciated function template
    std::cout << std::endl;
    ::iter(arrayChar, 5, toUpper);
    ::iter(arrayChar, 5, printTemplate);
    std::cout << std::endl;
    
    std::cout << "Int array: " << std::endl;
    int arrayInt[5] = {4, 6, 12, 513, -124};
    ::iter(arrayInt, 5, printTemplate);
    std::cout << std::endl;
    ::iter(arrayInt, 5, increment);
    std::cout << std::endl;
    ::iter(arrayInt, 5, printTemplate);
    return (0);
}