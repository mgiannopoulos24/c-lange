#include<stdio.h>
main()
{
	int i;
	char box[]="orange";
	for (i = 0; box[i] != '\0'; i++);
	printf("文字列:%s\n", &box[0]);
	printf("文字数は%d文字", i);
}