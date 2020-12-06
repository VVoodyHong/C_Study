#include <stdio.h>

int main()
{
	int low, up, n, i;
	printf("Enter the lower number:\n");
	scanf("%d", &low);
	printf("Enter the upper number:\n");
	scanf("%d", &up);
	n = up - low;

	printf("num      square     cube     \n");
	for(i = 0; i <= n; i++)
	{
		printf("%-8d %-10d %-9d\n", (low +i), (low + i)* (low + i), (low + i)* (low + i)* (low + i));
	}
}