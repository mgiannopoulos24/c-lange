#include<stdio.h>
main()
{
	int i,deta[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max=0, min=999;
	printf("zρdeta=");
	for (i = 0; i < 10; i++) {
		printf("%d ",deta[i]);
		if (deta[i] >= max) {
			max = deta[i];
		}
		if (deta[i] <= min) {
			min = deta[i];
		}
	}
	printf("Εεl%d Ε¬l%d\n", max, min);
}