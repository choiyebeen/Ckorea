#include<stdio.h>
void main12() {
	//  ���� ������
	(3 > 1) ? printf("����") : printf("����");

	// 1. ���̹޾Ƽ� 20�̻��̸� ����, �̸��̸� ����

	int num1;

	scanf_s("%d", &num1);
	
	//int num1;
	// print ("���� :");
	// scanf_s("%d", &num1);
	// (num1>=20)? print("����") : print("����");
	
	printf(" �����̴�. : %d\n", num1 >= 20);
	printf(" �����̴�. : %d\n", num1 < 20);
}