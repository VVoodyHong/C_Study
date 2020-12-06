#include <stdio.h>
#define MAX 26

int main()
{
	char alp;

	for (alp = 'a'; alp < 'a' + MAX; alp++)
	{
		printf("%c ", alp);
	}
}