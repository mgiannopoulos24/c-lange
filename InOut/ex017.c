#include<stdio.h>
main()
{
	float a, b, c;
	printf("一つ目の実数:");
	scanf("%f", &a);
	printf("２つ目の実数:");
	scanf("%f", &b);
	printf("３つ目の実数:");
	scanf("%f", &c);
	printf("合計=%8.2f 平均=%8.2f", a+b+c,(a+b+c)/3);
}