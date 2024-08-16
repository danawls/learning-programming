#include <stdio.h>

int main(void)
{
    long long k = 0;
    for(long long i = 0; i < 1000000000; ++i)
    {
        ++k;
    }
    printf("%lli\n", k);

    return 0;
}
