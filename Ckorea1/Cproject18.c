#include<stdio.h>
void main18() {

	int num = 0;
	printf("연도 입력 :");
	scanf_s("%d", &num);


	if (num % 400 == 0) {
	printf("윤년이다.");
	}
	else if (num%4 != 0 || num%100 == 0) {
		printf("윤년이 아니다.");
	}
	else {
		printf("윤년이다.");
	}



}

	/*int num = 0;
	printf("나이입력 :");
	scanf_s("%d", &num);

	if (num >= 20) {
		printf("성인입니다.\n");
	}
	else if (num < 20 && num >= 14) {
		printf("청소년입니다. \n");
	}
	else if (num < 14) {
		printf("어린이입니다. \n");
	}*/





	/*int num = 15;
	if (num < 10) {
		printf("한 자리수 \n");
	} 
	else if (num < 100) {
		printf("두 자리수 \n");
	}
	else if (num < 1000) {
		printf("세 자리수\n");
	}
	else {
		printf("그 외\n");
	} */
