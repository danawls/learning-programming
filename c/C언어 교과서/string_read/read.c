#include <stdio.h>

int main(void)
{
    char s[101];

    fgets(s, sizeof(s), stdin);

    printf("%s\n", s);
}