#include<stdio.h>
main()
{
	int as,ia;
	printf("数を入れて:");
	scanf("%d", &ia);
	as = 0;
	while(ia!=as){
		printf("*");
		as += 1;
	}
}