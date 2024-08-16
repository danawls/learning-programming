#include <stdio.h>
#include "main.h"

int main(void)
{
    ask();
    printf("%i, %i, %i\n", sum(3, 4), sum(1, 2), m(2, 1));
    printf("%s\n", jun);
    return 0;
}

void ask(void)
{
    printf("Hello!\n");
}

int sum(int a, int b)
{
    return (a + b);
}
