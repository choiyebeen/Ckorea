#include<stdio.h>
/*
함수 정의 (생성)
자료형 함수이름(입력받은 개수만큼 변수 선언)

return 돌려준값;

*/

void main() { 
	printf("함수1이 사용(호출)되었습니다.");
	return;
}

int 함수2(char var1, char var2) {
	if (var1 != NULL) {
		printf("함수2가 사용되었습니다");
		return 0;
	}
	else {
		printf("오류");
		return -1;
	}
}

float 함수3(void) {
	printf("함수3이 사용되었습니다.");
	return 3.141592f; //f넣는이유 > 
}

int main() {
	함수1(34);
	함수2('a', 'A');
	함수3();

	return 0;
}


int main() {

	int result = sum33(1, 2);
	printf("%d", result);

	return 0; //== 프로그램 마치면 0 보여줘라
}


//변수 : 값을 저장하는 공간
//함수: 코드를 저장하는 그룹 (기능단위로 제작)

