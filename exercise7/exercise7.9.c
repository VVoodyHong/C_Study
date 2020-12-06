#include <stdio.h>

int main()
{
	int i, j, n;

	printf("Enter a positive integer:\n");
	scanf("%d", &n);

	printf("\n");

	for (i = 2; i < n; i++)
	{
		int count = 0;

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				count++;
		}
		if (count == 0)
			printf("%d ", i);
	}
}