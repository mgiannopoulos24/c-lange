#include<stdio.h>
main()
{
	int i;
	float box[3],to=0,ave=0;
	box[0] = printf("実数を入力:");
	scanf("%f", &box[0]);
	box[1] = printf("実数を入力:");
	scanf("%f", &box[1]);
	box[2] = printf("実数を入力:");
	scanf("%f", &box[2]);
	for (i = 0; i <= 2; i++) {
		to += box[i];
		ave += 1;
	}
		printf("合計=%8.2f\n", to);
		printf("平均=%8.2f\n", to / ave);
}