#include<stdio.h>


// C언어 : 함수 + 포인터 + 구조체
// 함수 : 코드의 변화를 대비
// 구조체 : 자료형의 변화
//포인터 : 함수간의 통신


typedef struct MyInfo {
	char name[64];
	int age;
} MI;

int ModifyAge(MI* person) {
	printf("나이를 수정합니다 >>");
	scanf_s("%d", &((*person).age));

	return 0;
}

int ModifyName(MI* person) {
	printf("이름을 수정합니다>>");
	scanf_s("%s",(*person).name, 64);
}

int main371() {
	MI 철수 = { "김철수",20 };
	MI 짱구 = { "신짱구", 21 };
	int data = 0;
	char asd[3];

	ModifyAge(&짱구);
	printf("%s, %d\n", 짱구.name, 짱구.age);

	ModifyAge(&철수);
	printf("%s, %d\n", 철수.name, 철수.age);



	return 0;
}