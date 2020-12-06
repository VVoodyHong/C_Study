#include <stdio.h>


int main()
{
	float Mbs_per_sec, MB, Mb_per_sec;

	printf("Enter the download speed in Mbs per sec:\n");
	scanf("%f", &Mbs_per_sec);
	printf("Enter the file size in MB:\n");
	scanf("%f", &MB);

	Mb_per_sec = Mbs_per_sec / 8;
	printf("At %f megabits per second, a file of %f megabytes downloads in %f seconds.", Mbs_per_sec, MB, MB / Mb_per_sec);
	 
	return 0;
}