#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i=0, k[20];
	char s[20];
	printf("文字列を入力してください＞");
	scanf("%s", &s);
	while (s[i] != '\0') {
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k[i]);
		i++;
	}
	printf("復号化済み文字列は、");
	for (i = 0; s[i] != '\0';i++) {
		printf("%c", s[i]-k[i]);
	}
}