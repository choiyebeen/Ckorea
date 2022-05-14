#include<stdio.h>
void main22() {
	//출력
	//변수와 자료형
	//입력
	//조건문
	//반복문

	//출력
	printf("테스트\n");
	printf("테스트2\n");

	//자료형 변수(==저장공간);
	//변수 선언 (== 공간생성);
	int 소수점없는숫자정수;
	float 소수점있는숫자실수1;
	double 소수점있는숫자실수2;
	char 문자한개;
	char 문자여러개[64] = "test";

	//변수대입 (-> 수학에서의 =과 다름)
	소수점없는숫자정수 = 12;      //%d
	소수점있는숫자실수1 = 3.14f;            //%f
	소수점있는숫자실수2 = 3.22;          //%lt
	문자한개 = 'a';                             //%c


	//변수출력 
	printf("%d\n", 소수점없는숫자정수);
	printf("float은 %f\n", 소수점있는숫자실수1);
	printf("세번째 값은 %lf \n", 소수점있는숫자실수2);
	printf("네번째 값은 %c\n", 문자한개);
	printf("문자여러개 값은 %s\n", 문자여러개);


	//연산
	float 결과1 = 소수점있는숫자실수1 + 소수점있는숫자실수2;
	int 결과2 = 소수점없는숫자정수 - 소수점있는숫자실수1;
	int 결과3 = 소수점없는숫자정수 * 소수점없는숫자정수;
	float 결과4 = 소수점없는숫자정수 / 소수점있는숫자실수1;
	int 결과5 = 소수점없는숫자정수 % 2;

	//변수출력
	printf("더하기 결과: %f\n", 결과1);
	printf("빼기 결과 : %d\n", 결과2);
	printf("곱하기 결과: %d\n", 결과3);
	printf("나누기 결과: %f\n", 결과4);
	printf("나머지 결과 : %d\n", 결과5);


	//조건문

	int num = 3;

	if (num < 10) {
		printf("num은 10보다 크다\n");
	}
	else if (num == 10) {
		printf("num은 10이다\n");
	}
	else {
		printf("num은 10보다 크거나 작다\n");
	}


	// 퀴즈

	int num1 = 2;

	if (num1 < 0) {
		printf("음수이다\n");
	}
	else {
		printf("양수이다.\n");
	}


// 퀴즈2
	int num2 = 4;

	if (num2 % 2 == 0) {
		printf("짝수이다.\n");
	}
	else {
		printf("홀수이다.\n");
	}


	//조건문2
	switch (3) {
	case'A':
		printf("a 입니다.\n");
		 case 'B':
		printf(" b 입니다.\n");
		 case 'C':
		printf("c 입니다.\n");
		 default:
			printf("다 아닙니다.\n");
	}


	//반복문 while, for
	// for (처음값; 조건; 증감량) { 반복할 문장; }

	for (int i = 1; i < 6; i++) { //5번 반복
		printf(" %d번 hello for\n", i);
	} 

	//while명 조건{조건이 맞으면 반복할 문장;}
	int flag = 0;
	while (flag < 5) {
		printf("%d번 Hello World! \n ", flag);
		flag++;
	}


	//반복문 퀴즈 1~2번
	for (int i = 1; i < 11; i++) {
		printf("%d \n", i);
	}


	int sum = 0;
	for (int i = 1; i < 11; i++) {
		printf("%d\n", i);
		sum = sum + i;
	}

	int num4 = 0, num5 = 0;
	for (num4 = 0; num4 < 10; num4++) {
		printf("%d\n", num4 + 1);
		num5 = num5 + num4 + 1;
	}
	printf("%d\n", num5);




}