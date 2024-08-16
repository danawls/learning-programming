#include <iostream>

using namespace std;

double sum(int a, int b);
double sum(double a, double b);

int main()
{
    cout << sum(1.2, 1.3) << "and" << sum(1, 2) << endl;
    return 0;
}

double sum(int a, int b)
{
    return (double)(a + b);
}

double sum(double a, double b)
{
    return (double)(a + b);
}