#include "Array.hpp"

int main(int, char**)
{
    std::cout << "My tests!" << std::endl;

    //constructor with not parameter
    Array<int> array1; 
    //constructor with parameter
    Array<int> array2(10);
    //different type
    Array<std::string> stringArray(5);

    std::cout << "Int array tests: " << std::endl;
    for (int i = 0; i < 10; i++)
        array2[i] = i * 2;
    for (int i = 0; i < 10; i++)
        std::cout << array2[i] << std::endl;
    
    std::cout << "Trying to access invalid indexs:" << std::endl;
    try
    {
        array1[0] = -2;
        std::cout << "No exception thrown" << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        array2[11] = 11;
        std::cout << "No exception thrown" << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "String array tests:" << std::endl;
    std::string str = "Hello";
    for (int i = 0; i < 5; i++)
    {
        stringArray[i] = str;
        str = str + "!";
    }
    for (int i = 0; i < 5; i++)
        std::cout << stringArray[i] << std::endl;

    return 0;
}