#include <stdio.h>

int main()
{

	float inch, centi;

	printf("Enter your height in inches:\n");
	scanf("%f", &inch);

	centi = inch * 2.54;
	printf("Your height is %f centimeters\n", centi);
	 
	return 0;

}