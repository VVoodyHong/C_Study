#include <stdio.h>
#define MAX 255

int main()
{
	int i = 0;
	char line[MAX];

	printf("Enter a line to reverse:\n");

	while (scanf("%c", &line[i]), line[i] != '\n')
		i++;

	for (; 0 <= i; i--)
		printf("%c", line[i]);

	printf("\n");

	return 0;
}