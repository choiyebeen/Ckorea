#include<stdio.h>
void main17() {

	/*int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		//조건이 맞으면 수행
		printf("성인입니다.");
	}
	else {
		//조건이 틀리면 수행
		printf("미자입니다.\n");
	}
	*/

	/*int value = 15;
	if (value > 10) {
		printf("value는 10보다 큰 수 입니다.\n");
	}
	else {
		printf("value는 15보다 작은 수 입니다.\n");
	}
	printf("프로그램 종료"); */

	/* int age = 21;
	if (age >= 20) {
		printf("성인입니다.\n");
	}
	else
	{
		printf("미자입니다.\n");
	}
	printf("프로그램종료"); */






	int ranking = 0;
	char grade = "F";
	scanf_s("%d", &ranking);

	if (ranking >= 90) {
		printf("A");
	}
	else if (ranking >= 80 ) {
		printf("B");
	}
	else if (ranking >= 70 ) {
		printf("C");
	}
	else if (ranking >= 60 ) {
		printf("D");
	}
	else {
		printf("F");
	}




/* int num = 1234;
	printf("첫번째숫자입력 :");
		scanf_s("%d", &num);

		if (num == 1234) {
			printf("통과");
		}
		if (num != 1234) {
			printf("불통과");
		} */
}
