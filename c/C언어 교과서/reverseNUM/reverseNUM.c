#include <stdio.h>

int main(void)
{
    int num, reverse_num;

    printf("Put num u want\n");
    scanf("%i", &num);

    while (num != 0)
    {
        reverse_num = num % 10;
        printf("%i", reverse_num);
        num /= 10;
    }

    printf("\n");

    return 0;
}