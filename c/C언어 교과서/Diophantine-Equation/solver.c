#include <stdio.h>

// Function to compute the GCD of two numbers
int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Extended Euclidean Algorithm that returns the gcd of a and b, and computes x and y
int extended_euclid(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int g = extended_euclid(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;

    return g;
}

// Function to find and print all solutions to the Diophantine equation
void find_solutions(int a, int b, int n)
{
    int x, y;
    int g = extended_euclid(a, b, &x, &y);

    if (n % g != 0)
    {
        printf("No solutions exist.\n");
        return;
    }

    int x0 = x * (n / g);
    int y0 = y * (n / g);
    int step_x = b / g;
    int step_y = a / g;

    printf("One particular solution is (%d, %d).\n", x0, y0);
    printf("General solutions are given by:\n");
    printf("x = %d + k * %d\n", x0, step_x);
    printf("y = %d - k * %d\n", y0, step_y);
}

int main()
{
    int a, b, n;
    printf("Enter coefficients a and b, and the constant n: ");
    scanf("%d %d %d", &a, &b, &n);

    find_solutions(a, b, n);
    return 0;
}
