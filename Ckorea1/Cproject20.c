#include<stdio.h>
void main20() {
	//조건문 if~else if~else
	int age = 20;
	//if (age > 19) {
	//	printf("나이는 %d이고 성인이다");
	//}
	//else if (age > 13) {
	//	printf("나이는 %d이고 미자이다.");
	//}
	//else {
	//	printf("나이는 %d이고 어린이다.");
	//}
	
	// 조건문 switch~case~break
	switch (age)
	{
	case 0:
		printf("유아입니다");
		break;
	case 1:
		printf("10대입니다");
		break;
	case 2:
		printf("20대입니다");
		break;
	case 3:
		printf("30대입니다.");
		break;
	default:
		printf("초과");
	}
}