#include<stdio.h>
void main18() {

	int num = 0;
	printf("���� �Է� :");
	scanf_s("%d", &num);


	if (num % 400 == 0) {
	printf("�����̴�.");
	}
	else if (num%4 != 0 || num%100 == 0) {
		printf("������ �ƴϴ�.");
	}
	else {
		printf("�����̴�.");
	}



}

	/*int num = 0;
	printf("�����Է� :");
	scanf_s("%d", &num);

	if (num >= 20) {
		printf("�����Դϴ�.\n");
	}
	else if (num < 20 && num >= 14) {
		printf("û�ҳ��Դϴ�. \n");
	}
	else if (num < 14) {
		printf("����Դϴ�. \n");
	}*/





	/*int num = 15;
	if (num < 10) {
		printf("�� �ڸ��� \n");
	} 
	else if (num < 100) {
		printf("�� �ڸ��� \n");
	}
	else if (num < 1000) {
		printf("�� �ڸ���\n");
	}
	else {
		printf("�� ��\n");
	} */
