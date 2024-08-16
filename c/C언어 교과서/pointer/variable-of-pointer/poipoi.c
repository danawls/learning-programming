#include <stdio.h>

void ch(int *a);

int main(void)
{
    int a = 45;
    ch(&a);
    printf("%i\n", a);
}

void ch(int *a)
{
    *a = 100;
}