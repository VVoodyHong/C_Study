#include <stdio.h>

int main()
{
    int count, sum, multiple, n;

    printf("Please enter the number\n");
    scanf("%d", &n);

    count = 1;
    sum = 0;

    while (count <= n)
    {
        multiple = count * count;
        sum += multiple;
        count++;
    }
    printf("%d", sum);
    return 0;
}