#include<stdio.h>
main()
{
	int k, a, b;
	printf("演算子を入力:");
	scanf("%d", &k);
	printf("二つの整数を入力:");
	scanf("%d%d", &a, &b);
	if (k == 1) {
		printf("%d", a+b);
	}
	else if(k==2){
		printf("%d",a-b);
	}
	else if (k == 3) {
		printf("%d", a * b);
	}
	else if (k == 4) {
		printf("%d", a / b);
	}
	else {
		printf("error");
	}
}