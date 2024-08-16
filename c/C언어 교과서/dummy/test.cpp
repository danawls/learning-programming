#include <iostream>

void t(int in[])
{
    in[0] = 2;
}

void sort(int input[])
{
    input[0] = 0;
    t(input);
}

int main()
{
    int *a = new int[3];
    std::cin >> a[0];
    sort(a);
    std::cout << a[0] << std::endl;
}