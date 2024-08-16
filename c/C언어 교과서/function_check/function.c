#include <stdio.h>

void s(int a[]);

int main(void)
{
    int i[] = {1, 2, 3};

    s(i);

    for (int g = 0; g < 3; g++)
    {
        printf("%i ", i[g]);
    }
    printf("\n");

    return 0;
}

void s(int a[])
{
    a[2] = 4;
}