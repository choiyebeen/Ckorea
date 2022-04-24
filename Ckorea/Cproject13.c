#include<stdio.h>

void main() {
	
	int age,height;

	printf("나이 입력 : ");
	scanf_s("%d", &age);
	(age >= 20) ? printf("나이는 %d, 요금은 %d", age, 1250) : printf("나이는 %d 요금은 %d", age, 800);


	printf("\n키를 입력하세요 : ");
	scanf_s("%d", &height);
	(age >= 12 && height >= 120) ? printf("탑승가능") : printf("탑승 불가능");





	/*printf("당신의 나이는 ");
	printf(" 당신의 나이는 %d 이고 요금은 1250원입니다.", num1 >= 20);
	printf(" 당신의 나이는 %d 이고 요금은 450~750원입니다.", num1 < 20); 
	int num2, num3;

	scanf_s("나이를 입력하세요 : ", &num2);
	scanf_s("키를 입력하세요 : ", &num3);

	printf(num2 >= 12 && num3 >= 120); */


}