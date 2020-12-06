#include <stdio.h>

int main()
{
	char name[10];
	float height;

	printf("What's your name?\n");
	scanf("%s", name);
	printf("And then What's your height?\n");
	scanf("%f", &height);

	printf("%s, your are %f cm tall.", name, height);
	 
	return 0;
}