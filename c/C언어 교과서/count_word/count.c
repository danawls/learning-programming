#include <stdio.h>
#include <stdbool.h>

bool alpha(char alphabet);
int words(char string[]);

int main(void)
{
    char s1[1001];
    fgets(s1, sizeof(s1), stdin);

    printf("\n%s - %iwords\n", s1, words(s1));

    return 0;
}

bool alpha(char alphabet)
{
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))

        return true;
    else
        return false;
}

int words(char string[])
{
    int i;
    int wordCount = 0;
    bool in_word = false;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (alpha(string[i]))
        {
            if (!in_word)
            {
                in_word = true;
                wordCount++;
            }
        }
        else
        {
            in_word = false;
        }
    }
    return wordCount;
}