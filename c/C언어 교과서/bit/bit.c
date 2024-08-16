#include <stdio.h>

int main(void)
{
    int w1 = 25;
    int w2 = 77;
    int w3 = 11;

    int a = w1 & w2 & w3;
    int b = w1 | w2 | w3;
    int c = w1 ^ w2 ^ w3;

    a ^= b;
    b ^= a;
    a ^= b;

    printf("%i %i %i\n", ~a << 1, ~b >> 1, ~c << 5);
    return 0;
}