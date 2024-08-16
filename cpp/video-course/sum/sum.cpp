#include <iostream>

int getSum(int a, int b);

int main()
{
    int num1, num2, sum;
    std::cout << "Enter two interger" << std::endl;
    std::cin >> num1 >> num2;
    sum = getSum(num1, num2);
    std::cout << "Sum of two numbers is : " << sum << std::endl;

    return 0;
}

int getSum(int a, int b)
{
    return a + b;
}