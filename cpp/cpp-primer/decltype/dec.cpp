#include <iostream>

int main()
{
    int i = 9, &j = i;
    decltype(i) dj = 80;
    decltype(j) kj = dj;
    j = dj;
    std::cout << i << "\t" << dj << std::endl;

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;

    std::cout << d << std::endl;

    return 0;
}