#include<stdio.h>

void main() {
	
	int age,height;

	printf("���� �Է� : ");
	scanf_s("%d", &age);
	(age >= 20) ? printf("���̴� %d, ����� %d", age, 1250) : printf("���̴� %d ����� %d", age, 800);


	printf("\nŰ�� �Է��ϼ��� : ");
	scanf_s("%d", &height);
	(age >= 12 && height >= 120) ? printf("ž�°���") : printf("ž�� �Ұ���");





	/*printf("����� ���̴� ");
	printf(" ����� ���̴� %d �̰� ����� 1250���Դϴ�.", num1 >= 20);
	printf(" ����� ���̴� %d �̰� ����� 450~750���Դϴ�.", num1 < 20); 
	int num2, num3;

	scanf_s("���̸� �Է��ϼ��� : ", &num2);
	scanf_s("Ű�� �Է��ϼ��� : ", &num3);

	printf(num2 >= 12 && num3 >= 120); */


}