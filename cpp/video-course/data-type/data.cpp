#include <iostream>
#include <iomanip>
#include <ios>

int main()
{
    int i = 1;
    float f = 0.1;
    double d = 0.01;
    char c = 'A';
    bool b = true;

    std::cout << std::left;
    std::cout << std::boolalpha;
    std::cout << std::setw(10) << "int" << i << std::endl;
    std::cout << std::setw(10) << "float" << f << std::endl;
    std::cout << std::setw(10) << "double" << d << std::endl;
    std::cout << std::setw(10) << "char" << c << std::endl;
    std::cout << std::setw(10) << "bool" << b << std::endl;

    if (!b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}