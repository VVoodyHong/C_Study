#include <stdio.h>

int main()
{
	float pint, cup, ounce, tablespoon, teaspoon;

	printf("Please enter a volune in cups:\n");
	scanf("%f", &cup);

	pint = cup * 2;
	ounce = cup / 8; 
	tablespoon = cup / 16;
	teaspoon = cup / 48;

	printf("%f cups are converted to %f pint.\n", cup, pint);
	printf("%f cups are converted to %f ounce.\n", cup, ounce);
	printf("%f cups are converted to %f %f tablespoon.\n", cup, tablespoon);
	printf("%f cups are converted to %f teaspoon.\n", cup, teaspoon);

	return 0;

}

/*1 pint = 2 cups
1 cup = 8 ounces
1 ounce = 2 tablespoons
1 tablespoon = 3 teaspoons

1 pint = 2 cups = 16 ounces = 32 tablespoons = 96 teaspoons */