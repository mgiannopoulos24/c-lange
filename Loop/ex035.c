#include<stdio.h>
main()
{
	int a=0, to=0;
	printf("数を入れて:");
	scanf("%d", &a);
	do {
		to += a;
		printf("数を入れて:");
		scanf("%d", &a);
		if (a == -999)break;
	} while (a != -999);
	printf("合計=%d", to);
}