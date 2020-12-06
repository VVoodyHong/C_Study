#include <stdio.h>
#include <string.h>

int main()
{
	int len;
	char word[20];

	printf("Enter a single word:\n");
	scanf("%s", word);

	
	for (len = strlen(word); len >0; len--)
	{
		printf("%c", word[len - 1]);
	}
	return 0;
}