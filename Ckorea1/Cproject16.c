#include<stdio.h>
void main16() {
	
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("�����Դϴ�.");
	}
	if (age >= 0 && age < 20) {
		printf("�����Դϴ�.");
	}
	if (age < 0 || age>200) {
		printf("?\n");
	}




	/*int value = 15;
	if (value >= 10); 
	{
		printf("value�� 10���� ū �� �Դϴ�.\n");
	}

	printf("���α׷� ����\n");*/
	
}