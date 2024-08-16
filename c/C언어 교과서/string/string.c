#include <stdio.h>

void concat(char result[], char str1[], char str2[]);

int main(void)
{
    char s1[] = "Test ";
    char s2[] = "works.";
    char s3[20];

    concat(s3, s1, s2);

    printf("%s\n", s3);

    return 0;
}

void concat(char result[], char str1[], char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
        printf("%i\n", i);
    }

    for (j = 0; str2[j] != '\0'; j++)
    {
        result[i + j] = str2[j];
        printf("%i\n", j);
    }

    printf("%i %i\n", i, j);
    result[i + j] = '\0';
}