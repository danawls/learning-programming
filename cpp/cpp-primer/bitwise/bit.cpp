#include <iostream>

int main()
{
    int k = 12352;
    int j = 1224;
    std::cout << (k << 8) << "\t" << (k & j) << "\t" << (k | j) << "\t" << (k ^ j) << std::endl;

    return 0;
}