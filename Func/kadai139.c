#include<stdio.h>
void display(int num, char moji);
main()
{
	char moji;
	int num;
	printf("文字？:");
	scanf("%c", &moji);
	printf("整数？:");
	scanf("%d", &num);
	display(num, moji);
}

void display(int num, char moji)
{
	while ( num ) {
		printf("%c", moji);
		num--;
	}
}