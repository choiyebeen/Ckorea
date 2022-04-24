#include<stdio.h>
void main10() {

	// 1. 국어,수학,영어 입력받아서
// 총점과 평균

	/* int 총점;
	float 평균;


	printf("국어 점수 입력 > ");
	scanf_s("%d", &국어);
	printf("수학 점수 입력 > ");
	scanf_s("%d", &);
	printf("영어 점수 입력 > ");
	scanf_s("%d", &영어);

	printf("총점은 %d\n 평균 : %.1f\n\n", 총점, 평균);

	*/
	// 2.  숫자1,숫자2를 입력받아서
	// 사칙연산 ㄱㄱ

	int num1;
	int num2;
	
	num1 = 3;
	num2 = 4;

	num1 = num1 + num2;
	printf("n1+n2는 %d\n", num1);

	num1 = num1 - num2;
	printf("n1-n2는 %d\n", num1);

	num1 = num1 * num2;
	printf("n1*n2는 %d\n", num1);

	num1 = num1 / num2;
	printf("n1/n2는 %d\n", num1);

	num1 = num1 % num2;
	printf("n1%%n2는 %d\n", num1);
}