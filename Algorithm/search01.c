#include<stdio.h>
main()
{
	int i, s, deta[] = { 12,16,43,2,61,33,58,93,64,27 };
	printf("探索値sを入力->");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == deta[i]) {
			break;
		}
	}
	if (i >= 10) {
		printf("見つからなかった");
	}
	else {
		printf("deta[%d]にあった", i);
	}
}