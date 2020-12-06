#include <stdio.h>

int main()
{
    int n, count, sum;
    count = 0;
    sum = 0;

    printf("Please enter the number:\n");
    scanf("%d", &n);

    while (count <= n)
    {
        sum += count;
        count++;
    }
    printf("sum = %d", sum);
     
    return 0;
}