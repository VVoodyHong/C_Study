#include <stdio.h>

int main()
{
	int low, up, i, squares, sum;

	printf("Enter lower and upper integer :\n");
	scanf("%d %d", &low, &up);

	sum = 0;
	while (low != up)
	{
		for (i = 0; i <= up - low; i++)
		{
			squares = (low + i) * (low + i);
			sum += squares;
		}
		printf("The sum of the squares from %d to %d is %d\n", low, up, sum);
		printf("Enter next set of limits: \n");
		scanf("%d %d", &low, &up);
		sum = 0;
	}
	printf("Done\n");
	getchar();
}
