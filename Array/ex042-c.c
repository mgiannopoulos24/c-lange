#include<stdio.h>
main()
{
	int i=0;
	char box[]= "Apple";
	printf("1文字ずつ表示\n");
	while (box[i]!='\0') {
		printf("%c", box[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &box[0]);
}