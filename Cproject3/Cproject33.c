#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#define PI 2;

//함수 : 코드를 저장하는 기술 (기능단위로 저장)
int information(int num) {
	if (num == 1) {
		printf("1번을 선택하였습니다.\n");
		return 1;
		printf("죽은코드\n");
	}
	else if (num == 2) {
		printf("2번을 선택하였습니다.\n");
		return 2;
		printf("죽은코드\n");
	}
	else {
		printf("잘못입력함\n");
		return -1;
		printf("죽은코드\n");
	}
	return 0;
	printf("죽은코드\n");
	printf("죽은코드\n");
}

int main33() {
	int num = 0;
	scanf_s("%d", &num);
	num = information(num);
	printf("%d\n", num);


	return 0;
}