#include<stdio.h>
void main9() {

	//��� printf
	//�Է� scanf_s > ���� ��� �ʿ�

	int num1;
	printf("���ڸ� �Է��ϼ��� >>");
	scanf_s("%d", &num1);
	printf("num1�� �� ���� %d\n", num1);

	float num2;
	printf("�Ǽ��� �Է��ϼ��� >>");
	scanf_s("%f", &num2);
	printf("num2�� �� ���� %f\n", num2);

	char c;
	char cc[256];
	printf("���ڿ��� �Է��ϼ��� >>");
	getchar();
	scanf_s("%s", &cc,256);
	printf("���ڿ��� �� ���� %s\n", cc);

}