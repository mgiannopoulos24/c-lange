#include<stdio.h>
main()
{
	int i,a;
	char moji[999];

	printf("回数と文字列を入力");
	scanf("%d%s", &a, &moji[0]);
	for (i = 0; i < a; i++) {
		for (int j = 0; moji[j] != '\0'; j++) {
			printf("%c", moji[j]);
		}
	}
}