#include<stdio.h>
main()
{
	char txt[80];
	int i;
	printf("文字列は？");
	scanf("%s", &txt[0]);
	printf("文字列:%s ", &txt[0]);
	for (i = 0; txt[i] != '\0'; i++);
	printf("文字数=%d", i);
}