#include<stdio.h>
main()
{
	int yy;
	printf("西暦を入力:");
	scanf("%d", &yy);
	if (yy >= 1989) {
		printf("平成生まれです\n");
	}
	else if(yy<1926) {
		printf("大正生まれです\n");
	}
	else {
		printf("昭和生まれです\n");
	}
}