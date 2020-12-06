#include <stdio.h>
#define SIZE 8

int main()
{
	int num[SIZE];
	int sum[SIZE];
	int resSum = 0;

	printf("Enter 8 integer:\n");

	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &num[i]);
		resSum += num[i];
		sum[i] = resSum;
	}
	printf("Integer :        ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", num[i]);
	}
	printf("\n");

	printf("Cumulative sum : ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", sum[i]);
	}
	return 0;
}