#include<stdio.h>
//void main() {

	//함수: 코드를 저장하는 기술 _ 기능단위로 저장
	//넘겨줄땐 ()
	// 결과를 받을땐 return

	//return 0;
//}

int print(int var) {
	printf("프린트 함수 실행됨\n");

	return var;
}

//sum 함수 인자는 2개, 리턴값은 두개를 더한 값으로
int sum2(var1, var2) {
	var1 + var2;
	return var1 + var2;
}

int main24() {
	//int s = print(123);
	int result1 = sum2(10, 20);
	printf("%d\n", result1);
	return 0;
}

//float main() {
//
//	return 0.0;
//}
//
//char main() {
//
//	return 'a';
//}

