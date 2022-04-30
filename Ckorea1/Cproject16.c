#include<stdio.h>
void main16() {
	
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인입니다.");
	}
	if (age >= 0 && age < 20) {
		printf("미자입니다.");
	}
	if (age < 0 || age>200) {
		printf("?\n");
	}




	/*int value = 15;
	if (value >= 10); 
	{
		printf("value는 10보다 큰 수 입니다.\n");
	}

	printf("프로그램 종료\n");*/
	
}