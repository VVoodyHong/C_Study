#include <stdio.h>

int main()
{
    int num;
    int even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0;
    float even_avg, odd_avg;

    printf("Enter the integers( 0 to stop)\n");

    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {
            even_count++;
            even_sum += num;
        }
        else
        {
            odd_count++;
            odd_sum += num;
        }
    }

    even_avg = even_sum / even_count;
    odd_avg = odd_sum / odd_count;

    printf("Number of even integers: %d\n", even_count);
    printf("Average value of even integers: %.2f\n", even_avg);
    printf("Number of odd integers: %d\n", odd_count);
    printf("Average value of odd integers: %.2f\n", odd_avg);

    return 0;
}