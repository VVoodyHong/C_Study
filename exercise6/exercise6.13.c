#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	int aray[8];
	for (i = 0; i <= 7; i++)
	{
		aray[i] = pow(2.0, i);
	}

	i = 1;
	do {
		printf("%d ", aray[i]);
		i++;
	} while (i < 8);

	return 0;
}
