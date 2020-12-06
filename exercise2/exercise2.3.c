#include <stdio.h>

int main()
{
	int age, days;
	const int YEAR = 365;

	printf("Enter your age:\n");
	scanf("%d", &age);
	
	days = YEAR * age;

	printf("Your age is converted to %d years or %d days.\n", age, days);

	return 0;
}