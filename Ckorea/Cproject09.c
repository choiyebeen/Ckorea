#include<stdio.h>
void main9() {

	//출력 printf
	//입력 scanf_s > 받을 장소 필요

	int num1;
	printf("숫자를 입력하세요 >>");
	scanf_s("%d", &num1);
	printf("num1에 들어간 값은 %d\n", num1);

	float num2;
	printf("실수를 입력하세요 >>");
	scanf_s("%f", &num2);
	printf("num2에 들어간 값은 %f\n", num2);

	char c;
	char cc[256];
	printf("문자열를 입력하세요 >>");
	getchar();
	scanf_s("%s", &cc,256);
	printf("문자열에 들어간 값은 %s\n", cc);

}