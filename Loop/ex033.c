#include<stdio.h>
main()
{
	int c, to, ave;
	c = 0;
	ave = 0;
	printf("数は？");
	scanf("%d", &c);
	for (to = 0; c != -999; ave++) {
		to += c;
		printf("数は？:");
		scanf("%d", &c);
	}
	printf("合計は=%d 平均は=%.2f", to,(float) to / ave);
}