#include <stdio.h>

void cubed();

int main()
{
	double n;

	printf(" Enter the number in integer\n");
	scanf("%lf", &n);
	cubed(n);
}

void cubed(double n)
{
	double m;

	m = n * n * n;
	printf("%lf", m);
}