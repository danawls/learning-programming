#include "main.h"

void capture (long int *ptr)
{
    long int **get_ptr = &ptr;
    **get_ptr -= 1;
}

