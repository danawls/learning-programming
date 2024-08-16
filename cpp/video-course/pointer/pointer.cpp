#include <iostream>

int main()
{
    int str[5] = {1, 2, 3, 4, 5};
    std::cout << *(str + 2) << std::endl;

    char c[] = "Hello";
    std::cout << *(c + 2) << std::endl;

    return 0;
}