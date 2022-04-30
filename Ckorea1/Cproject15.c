#include<stdio.h>
void main15() {

	int num1;
	int num2;

	num1 = 10;
	num2 = 2;

	num1 = num1 + num2;
	printf("더하기는 %d\n", num1);

	num1 = num1 - num2;
	printf("빼기는 %d\n", num1);

	num1 = num1 * num2;
	printf("곱하기는 %d\n", num1);

	num1 = num1 / num2;
	printf("나누기는 %d\n", num1);

	num1 = num1 % num2;
	printf("나머지는 %d\n", num1);

	/*
	int num1=0; num2=0;
	printf("첫번째숫자입력 :")
	scanf_s("%d",&num1);
	printf("두번째숫자입력 :")
	scanf_s("%d",&num2);

	printf("더하기 : %d\n",num1+num2);
	printf("빼기 : %d\n".num1-num2);
	printf("나누기 : %d\n",(float)num1/num2);
	printf("나머지구하기: %d\n",num1%num2);

*/
}
