#include<stdio.h>
main()
{
	int mo;
	printf("月を入力:");
	scanf("%d", &mo);
	if (mo == 1|| mo==3 || mo== 5 || mo== 7 || mo== 8 || mo==10 || mo==12) {
		printf("最終日は31日です");
	}
	else if(mo==2){
		printf("最終日は28日です");
	}
	else {
		printf("最終日は30日です");
	}
}