#include<stdio.h>
main()
{
	int i;
	for (i = 1; i <= 10; i++) {
		printf("1から%dまでの和=%8.0f\n", i, i/2.0*(2+(i-1)));
	}
}