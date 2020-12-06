#include <stdio.h>

int main()
{
	int n, m;


	printf("Please enter the number in integer:\n");
	scanf("%d", &n);

	m = n + 11;

	while ( n < m )
	{
		printf("%d ", n);
		n++;
	}

	return 0;
}