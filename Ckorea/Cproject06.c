// �̸�, ���� == ����

#include<stdio.h> // std�� ���Ĵٵ��� ���θ�, io�� ��ǲ �ƿ�ǲ�� ���θ�

void main6() {
	//���� == ���
	// ������ ==  �����  ���� ����

	// +,-,%,*,/

	int num1, num2; //���� 2�� ����(����)
	num1 = 1, num2 = 2; //����
	num1 = num2; // �����̶�� num1�̶�� �������(����)�� num2�� ���� �־��� ��� ���� ��
	num1 = num1;//�̷��� �Ǹ� ������ ���� �������� ���� �Ǵ°� 

	num1 = 1;
	num2 = 2;
	int sum = num1 + num2; //��ǻ�ʹ� ����ϰ� ����� ���������

	int sub = num1 + num2;
	int mul = num1 + num2;

	float div = (float) num1 / num2;    // float div = num1 / num2; �϶� 1 / 2 == 0.5�ε� 0�� ���� ����? 
                                                  // > num1 �� num2�� �Ѵ� int���̶� �׳� ���� ��ü�� float div = 0�ΰſ���
	
	int ampersand = num1 % num2; // ampersand�� �������� �����

	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%.1f\n", div); // %�� f ���̿� .(��)��� ���� �����ָ� �� ��ŭ�� �ڸ�����ŭ�� ���â�� ��
	printf("%d", ampersand);
}