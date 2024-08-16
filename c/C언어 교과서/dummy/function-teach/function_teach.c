#include <stdio.h>
#include <stdbool.h>

#define add_const 1
#define minus_const 2
#define divide_const 3
#define multiply_const 4

int add(int add_a, int add_b);
int minus(int minus_a, int minus_b);
int divide(int devide_a, int devide_b);
int multiply(int mul_a, int mul_b);

int main(void)
{
    int user_input1, user_input2, result, operator;
    printf("Enter the first number: ");
    scanf("%i", &user_input1);
    printf("Enter the second number: ");
    scanf("%i", &user_input2);

    bool n = false;

    while (!n)
    {
        printf("Enter the operator(1-add, 2-minus, 3-divide, 4-multiply): ");
        scanf("%i", &operator);

        if (operator== add_const)
        {
            n = true;
            result = add(user_input1, user_input2);
        }
        else if (operator== minus_const)
        {
            n = true;
            result = minus(user_input1, user_input2);
        }
        else if (operator== divide_const)
        {
            n = true;
            result = divide(user_input1, user_input2);
        }
        else if (operator== multiply_const)
        {
            n = true;
            result = multiply(user_input1, user_input2);
        }
        else
        {
            printf("Enter the valid number\n");
        }
    }
    printf("The result is: %i\n", result);
    return 0;
}

int add(int add_a, int add_b)
{
    return (add_a + add_b);
}

int minus(int minus_a, int minus_b)
{
    return (minus_a - minus_b);
}

int divide(int devide_a, int devide_b)
{
    return (devide_a / devide_b);
}

int multiply(int mul_a, int mul_b)
{
    return (mul_a * mul_b);
}
