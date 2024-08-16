#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *poi = calloc(10, sizeof(int));

    if (poi == NULL)
    {
        return 1;
    };

    for (int i = 1; i <= 10; i++)
    {
        poi[i - 1] = i * i;
        printf("%i, ", poi[i - 1]);
    }

    printf("\n");

    free(poi);
    poi = NULL;

    return 0;
}