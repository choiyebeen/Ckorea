#include<stdio.h>

int A(int num) {
	num++; // num = num + 1; num+=1;


	return 0;
}

int B(int *num){
	(*num)++;

	return 0;
	}

int main29() {
	int no = 3;

	int* pNum; //포인터 변수선언
	pNum = &no; //주소참조
	*pNum; // 역참조

	printf("%p\n", &no); //변수의주소
	printf("%d\n", no);  // 변수의 값

	printf("%p\n", pNum); // 포인터 변수의 값
	printf("%d\n", *pNum); // 역참조

	return 0;
}

//1. 변수 선언 (변수를 만든다)
//2. 포인터 변수 만들고 변수의 주소를 담는다.
//3. 사용할때는 역참조를 사용한다.
// 포인터 변수를 선언시(자료형을 적을때)에  변수 앞에 *를 적는다.
// 역참조를 하려면 변수앞에 *을 적는다. (변수 사용시에 앞에 *적음)
// 변수의 주소는 변수앞에 &을 적으면 된다.
