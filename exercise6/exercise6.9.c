#include <stdio.h>

int main()
{
	float n1, n2;

	printf("Enter two floating-point numbers:\n");
	scanf("%f, %f", &n1, &n2);

	printf("%.5f", (n1 - n2) / (n1 * n2));
}