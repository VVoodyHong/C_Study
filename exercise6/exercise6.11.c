#include <stdio.h>
#define SIZE 8

int main()
{
	int i;
	int num[SIZE];

	printf("Enter eight integers:\n");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 7; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	return 0;
}