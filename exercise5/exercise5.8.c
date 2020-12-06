#include <stdio.h>

int main()
{
    int fst, snd, end;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d", &fst);
    while (fst > 0)
    {
        printf("Now enter the first operand:\n");
        scanf("%d", &snd);
        end = snd % fst;
        printf("%d %% %d is %d\n", snd, fst, end);
        printf("Enter an integer to serve as the second operand ( <= 0 to quit) :\n");
        scanf("%d", &fst);
    }

    printf("Done");
    return 0;
}