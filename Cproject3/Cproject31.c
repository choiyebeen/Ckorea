#include<stdio.h>

void myPow(int* num) {

	//main == main�� Num;
	*num = (*num) * (*num);

}

int main31() {

	//������ ���� 1���� ���� ��
	int num = 3;
	// num = num*num;

	// ����Ʈ ������ ��Ƽ�
	int* Num = &num;
	// �����ϴ� �Լ��� �Ѱ� ���
	myPow(Num);

	// �������ؼ� printf
	printf("%d\n", num);

}

//�����Ҷ� * : ������ ���� ����
// ����Ҷ� * : ������
//& : �ּ��� ��
