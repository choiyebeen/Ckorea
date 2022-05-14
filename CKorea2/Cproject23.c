#include<stdio.h>

/* void sum(int var1, int var2, int var3) {
	printf("%d\n", var1+var2+var3);
}

//sub : 두수를 뺀다 음수가 있다면 음수는 양수로 바뀌어서



void main() { // main이라는 이름의 함수

	//함수 : 코드를 저장하는 기술 ( 씨언어에서 주어지는 문법으로는 할 수 없는 계산을 개발하기위해 만들어져서 사용 )
	// 기능단위로 저장, 소괄호 붙어있음

	sum(50,20,10);
	sum(10, 20,30);
	sum(1, 2,3);




	// sub(-10, -5); */

//sub 문제 

void sum(int var1, int var2) {
	printf("%d\n", var2 + var1);
}

void sub(int var1, int var2) { 
	if (var1 < 0) {
		var1 = var1 * -1;
	}
	if (var2 < 0) {
		var2= var2 * -1;
	}
	printf("%d\n", var1-var2);
}

void main23(){
	sub(-10,-5);
}


// div 문제



