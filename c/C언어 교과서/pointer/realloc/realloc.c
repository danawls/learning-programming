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

    int *new_poi = realloc(poi, 100 * sizeof(int));

    for (int j = 1; j <= 100; j++)
    {
        new_poi[j - 1] = j * j;
        printf("%i, ", new_poi[j - 1]);
    }
    printf("\n");

    free(new_poi);
    new_poi = NULL;

    return 0;
}