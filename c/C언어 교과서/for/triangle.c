#include <stdio.h>

int main(void)
{
    int n;
    for (int b = 0; b >= 0; b++)
    {
        printf("Enter triangle's floors:");
        scanf("%d", &n);
        if (n % 2 == 0 || n > 225)
        {
            printf("유효하지 않은 값입니다.\n");
            continue;
        }
        break;
    }
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        for (int a = 0; a < (n - i) / 2; ++a)
        {
            printf(" ");
        }
        for (int a = 0; a < i; ++a)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}