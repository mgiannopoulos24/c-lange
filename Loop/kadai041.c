#include<stdio.h>
main()
{
	int ia, to, ave;
	ia = 0;
	to = 0;
	ave = 0;
	printf("数を入れて:");
	scanf("%d", &ia);
	while (ia != -999) {
		to += ia;
		ave += 1;
		printf("数を入れて:");
		scanf("%d", &ia);
	}
	printf("合計=%d\n", to);
	printf("平均=%8.2f\n", (float)to / ave);
}