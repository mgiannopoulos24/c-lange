#include<stdio.h>
main()
{
	int i = 0, a = 0, c[10];
	while (a != -999) {
		printf("Ž(-999ĹIš)?");
		scanf("%d", &a);
		c[i] = a;
		i++;
	}
	printf("zńc=");
	for (int j = 0; j < i-1; j++) {
		printf("%d ", c[j]);
	}
}
