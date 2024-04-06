#include "iter.hpp"

static void increment(int & nb)
{
    ++nb;
    return ;
}

void toUpper(char & c)
{
    c = toupper(c);
}

int main(void)
{
    size_t size = 5;
    int array_int[5] = {4, 6, 12, 513, -124};
    char array_char[6] = "hello";
    ::iter<char []>(&array_char, size, printTemplate);
    ::iter<int []>(&array_int, size, increment);
    return (0);
}