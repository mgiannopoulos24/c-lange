#include<stdio.h>
main()
{
	int i=0;
	char s[999];
	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s);
	printf("復号化文字列は、");
	while (s[i] != '\0') {
		s[i] = s[i] - 0x01;
		printf("%c", s[i]);
		i++;
	}
}