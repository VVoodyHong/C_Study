#include <stdio.h>

int main()
{

	int days, weeks, lefts;

	printf("Please enter the number of days:\n");
	scanf("%d", &days);

	while (days > 0)
	{
		weeks = days / 7;
		lefts = days % 7;

		printf("%d days are %d weeks, %d days.\n", days, weeks, lefts);

		printf("Please enter the number of days:\n");
		scanf("%d", &days);

	}

	return 0;
}