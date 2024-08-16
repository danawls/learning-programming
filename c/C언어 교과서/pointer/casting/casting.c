#include <stdio.h>

int main()
{
    int x = 1237895789; // 이진 표현: 01000000 00000000 00000000 00000000
    void *a = &x;

    *(int *)a = 3465;

    printf("%i\n", x);
    printf("%lu\n", sizeof(*(int *)a));
}
