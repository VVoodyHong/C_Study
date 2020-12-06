#include <stdio.h>

int main()
{
	float quart, mol, gram;

	printf("Enter an amount of water in quart:\n");
	scanf("%f", &quart);

	gram = 950 * quart;
	mol = 3.0e-23 / gram;

	printf("the amount of %f quart is %f gram.\n", quart, gram);
	printf("%f quarts have %e molecules in that amount\n", quart, mol);
	 
	return 0;
}