#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji<= 0x5a) {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
}