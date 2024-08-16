#include <stdio.h>

int main(void)
{
    int u, v, temp;

    printf("PLS put two nonnagative intergers.\n");
    scanf("%i%i", &u, &v);

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their GCD is %i.\n", u);

    return 0;
}