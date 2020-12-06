#include <stdio.h>
#include <string.h>

int main()
{
	char fname[10];
	char lname[10];
	int f, l;
	
	

	printf("What's your first name?\n");
	scanf("%s", fname);
	printf("What's your last name?\n");
	scanf("%s", lname);
	 
	f = strlen(fname); l = strlen(lname);

	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", f, f, l, l);

	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", f, f, l, l);

	return 0;
}