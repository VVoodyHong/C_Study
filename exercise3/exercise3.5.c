#include <stdio.h>

int main()
{
	float age, sec;

	printf("Enter your age:\n");
	scanf("%f", &age);

	sec = age * 3.156e7;
	printf(" your age is converted to %f seconds", sec);
	 
	return 0;
}