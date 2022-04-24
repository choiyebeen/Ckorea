#include<stdio.h>
void main12() {
	//  조건 연산자
	(3 > 1) ? printf("ㅇㅇ") : printf("ㄴㄴ");

	// 1. 나이받아서 20이상이면 성인, 미만이면 미자

	int num1;

	scanf_s("%d", &num1);
	
	//int num1;
	// print ("나이 :");
	// scanf_s("%d", &num1);
	// (num1>=20)? print("성인") : print("미자");
	
	printf(" 성인이다. : %d\n", num1 >= 20);
	printf(" 미자이다. : %d\n", num1 < 20);
}