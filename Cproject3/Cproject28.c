#include<stdio.h>
#include"Cproject29.h"

//복습 : 함수, 배열
//함수
/*
함수 만드는방법 (정의) =
자료형 함수이름(변수선언){

 return 자료형에 맞는 값;

 }
*/
int main28() {
	//함수사용
	int num = 0;
	num = Mul(3,5);
	printf("곱하기 결과는 : %d\n", num);
	print();

	float div_result = 0.0f;
	div_result=Div(10.0f, 5.0f);
	printf("나누기 결과는 %.2f\n", div_result);
	div_result=Div(5,0);
	printf("나누기2 결과는 %.2f\n", div_result);

	int Cal_result = Calc(3);
	printf("계산한 결과는 %d\n", Cal_result); //26

	return 0;
}

//숫자 2개를 전달받아서 곱하기 해주는 함수
int Mul(int num1, int num2) {
	int result = num1 * num2;

	return result;
}

void print() {
	printf("printf함수를 사용하였습니다. \n");
}

//실수 2개를 전달 받아서 첫번째숫자/두번째숫자 를 계산하고 돌려줌(리턴)
float Div(float num1, float num2)
{
	float result = 0.0;
	if (num2 != 0.0) {
		result = num1 / num2;
	}
	else {
		printf("0으로는 나눌수없다. \n");
	}

	return result;
}

//x ^ 2 + 2x + 11;
int Calc(int num) {

	int result = (num*num) + (2*num) + 11;

	return result;
}