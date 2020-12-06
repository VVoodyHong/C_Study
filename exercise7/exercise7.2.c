#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    printf(" Enter your charcaters:\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            count = 0;
            printf("\n");
            continue;
        }

        printf("%c = %d ", ch, ch);
        count++;

        if (count % 8 == 0)
            printf("\n");
    }

    return 0;
}