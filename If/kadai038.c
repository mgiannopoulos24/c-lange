#include<stdio.h>
main()
{
	char en;
	printf("一文字入力？");
	scanf("%c", &en);
	if (0x41 <= en && en <= 0x5a) {
		printf("変換結果は%c", en + 0x20);
	}
	else if (0x61 <= en && en <= 0x7a) {
		printf("変換結果は%c", en - 0x20);
	}
	else {
		printf("変換結果は%c", en);
	}
}