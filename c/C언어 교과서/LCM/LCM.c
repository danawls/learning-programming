#include <stdio.h>

int GCD(int a, int b);

int main(void)
{
    int num1, num2, x, y, gcd, LCM;
    printf("Enter two numbers to get LCM\n first num = ");
    scanf("%i", &num1);
    printf("second num = ");
    scanf("%i", &num2);

    gcd = GCD(num1, num2);

    x = num1 / gcd;
    y = num2 / gcd;

    LCM = gcd * x * y;

    printf("LCM is %i\n", LCM);

    return 0;
}

int GCD(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}