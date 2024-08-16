#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *poi = (int *)malloc(10 * sizeof(int));

    if (poi == NULL)
    {
        return 1;
    };

    for (int i = 1; i <= 10; i++)
    {
        poi[i - 1] = i * i;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%i, ", poi[j]);
    }

    printf("\n");

    free(poi);
    poi = NULL;

    return 0;
}