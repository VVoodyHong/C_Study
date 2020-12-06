#include <stdio.h>
#include <stdlib.h>

int main()
{

	char fname[20];
	char lname[20];

	printf("Enter your name:\n");
	scanf("%s %s", fname, lname);
	printf("%s %s\n", fname, lname);
	printf("%s\n", fname);

	return 0;
}