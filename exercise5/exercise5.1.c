#include <stdio.h>

int main()
{
	const int num = 60;
	int minutes, hours, lefts;

	printf("Enter a minutes:\n");
	scanf("%d", &minutes);

	while (minutes > 0)
	{
		hours = minutes / num;
		lefts = minutes % num;

		printf("%d minutes is %d hours %d minutes.\n", minutes, hours, lefts);
		printf("Enter a minutes:\n");
		scanf("%d", &minutes);
	}

	return 0;
}