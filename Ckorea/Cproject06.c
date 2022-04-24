// 이름, 나이 == 변수

#include<stdio.h> // std는 스탠다드의 줄인말, io는 인풋 아웃풋의 줄인말

void main6() {
	//연산 == 계산
	// 연산자 ==  계산을  위한 기초

	// +,-,%,*,/

	int num1, num2; //변수 2개 생성(선언)
	num1 = 1, num2 = 2; //대입
	num1 = num2; // 왼쪽이라는 num1이라는 저장공간(변수)에 num2의 값을 넣어줘 라는 뜻이 됨
	num1 = num1;//이렇게 되면 왼쪽은 공간 오른쪽은 값이 되는거 

	num1 = 1;
	num2 = 2;
	int sum = num1 + num2; //컴퓨터는 계산하고 기억을 시켜줘야함

	int sub = num1 + num2;
	int mul = num1 + num2;

	float div = (float) num1 / num2;    // float div = num1 / num2; 일때 1 / 2 == 0.5인데 0이 나온 이유? 
                                                  // > num1 과 num2가 둘다 int형이라서 그냥 문장 자체가 float div = 0인거였음
	
	int ampersand = num1 % num2; // ampersand는 나머지를 출력함

	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%.1f\n", div); // %와 f 사이에 .(점)찍고 숫자 적어주면 그 만큼의 자릿수만큼만 출력창에 뜸
	printf("%d", ampersand);
}