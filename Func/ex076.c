#include<stdio.h>
void sumavg(int *a,int *b,int *to, float *ave);
main()
{
	int a, b, to;
	float ave;
	printf("整数を二つ入力:");
	scanf("%d%d", &a, &b);
	sumavg(&a, &b,&to, &ave);
	printf("合計は%d、平均は%.2f", to, ave);
}

void sumavg(int *a, int *b, int *to, float *ave)
{
	*to = *a + *b;
	*ave = (float)*to / 2;
	return;
}