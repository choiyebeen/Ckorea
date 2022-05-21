#include<stdio.h>

void myPow(int* num) {

	//main == main의 Num;
	*num = (*num) * (*num);

}

int main31() {

	//정수형 변수 1개를 만든 후
	int num = 3;
	// num = num*num;

	// 포인트 변수에 담아서
	int* Num = &num;
	// 제곱하는 함수에 넘겨 사용
	myPow(Num);

	// 역참조해서 printf
	printf("%d\n", num);

}

//선언할때 * : 포인터 변수 선언
// 사용할때 * : 역참조
//& : 주소의 값
