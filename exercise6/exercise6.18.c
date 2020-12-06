#include <stdio.h>

int main()
{
	int people, weeks;

	people = 5;
	weeks = 0;
	printf("weeks l people\n");
	printf("---------------\n");

	while (people <= 150)
	{
		printf("%5d l %6d\n", weeks, people);
		people =(people - weeks) * 2;
		weeks++;
	}
}