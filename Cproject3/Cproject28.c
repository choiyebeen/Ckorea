#include<stdio.h>
#include"Cproject29.h"

//���� : �Լ�, �迭
//�Լ�
/*
�Լ� ����¹�� (����) =
�ڷ��� �Լ��̸�(��������){

 return �ڷ����� �´� ��;

 }
*/
int main28() {
	//�Լ����
	int num = 0;
	num = Mul(3,5);
	printf("���ϱ� ����� : %d\n", num);
	print();

	float div_result = 0.0f;
	div_result=Div(10.0f, 5.0f);
	printf("������ ����� %.2f\n", div_result);
	div_result=Div(5,0);
	printf("������2 ����� %.2f\n", div_result);

	int Cal_result = Calc(3);
	printf("����� ����� %d\n", Cal_result); //26

	return 0;
}

//���� 2���� ���޹޾Ƽ� ���ϱ� ���ִ� �Լ�
int Mul(int num1, int num2) {
	int result = num1 * num2;

	return result;
}

void print() {
	printf("printf�Լ��� ����Ͽ����ϴ�. \n");
}

//�Ǽ� 2���� ���� �޾Ƽ� ù��°����/�ι�°���� �� ����ϰ� ������(����)
float Div(float num1, float num2)
{
	float result = 0.0;
	if (num2 != 0.0) {
		result = num1 / num2;
	}
	else {
		printf("0���δ� ����������. \n");
	}

	return result;
}

//x ^ 2 + 2x + 11;
int Calc(int num) {

	int result = (num*num) + (2*num) + 11;

	return result;
}