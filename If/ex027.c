#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5a) {
		printf("変換すると%c", moji + 0x20);
	}
	else if (0x61 <= moji && moji <= 0x7a) {
		printf("変換すると%c", moji - 0x20);
	}
	else {
		printf("入力エラー\n変換できません\n");
	}
}