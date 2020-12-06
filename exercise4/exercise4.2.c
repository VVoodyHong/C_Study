#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];

	printf("What's your last name?:\n");
	scanf("%s", name);

	//a
	printf("\"%s\"\n", name);
	//b
	printf("\"%20s\"\n", name);
	//c
	printf("\"%-20s\"\n", name);
	//d
	printf("\"%*s\"\n", strlen(name) + 3, name);
	return 0;
}