#include <stdio.h>

int main()
{

    char ch;
    int spaces, newlines, others;

    spaces = 0;
    newlines = 0;
    others = 0;

    printf("Enter your charcters.\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            newlines++;
        else
            others++;
    }
    printf("The number of spaces is %d\n", spaces);
    printf("The number of newlines is %d\n", newlines);
    printf("The number of other characters is %d\n", others);

    return 0;
}