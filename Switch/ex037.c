#include<stdio.h>
main()
{
	char co;
	printf("演算子を入れて:");
	scanf("%c", &co);
	switch (co) {
	case 0x2b:
		printf("加算です");
		break;
	case 0x2d:
		printf("減算です");
		break;
	case 0x2a:
		printf("乗算です");
		break;
	case 0x2f:
		printf("除算です");
		break; 
	case 0x25:
		printf("あまりです");
		break;
	default:
		printf("その他です");
		break;
	}
}