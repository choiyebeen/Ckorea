#include<stdio.h>
/*
�Լ� ���� (����)
�ڷ��� �Լ��̸�(�Է¹��� ������ŭ ���� ����)

return �����ذ�;

*/

void main() { 
	printf("�Լ�1�� ���(ȣ��)�Ǿ����ϴ�.");
	return;
}

int �Լ�2(char var1, char var2) {
	if (var1 != NULL) {
		printf("�Լ�2�� ���Ǿ����ϴ�");
		return 0;
	}
	else {
		printf("����");
		return -1;
	}
}

float �Լ�3(void) {
	printf("�Լ�3�� ���Ǿ����ϴ�.");
	return 3.141592f; //f�ִ����� > 
}

int main() {
	�Լ�1(34);
	�Լ�2('a', 'A');
	�Լ�3();

	return 0;
}


int main() {

	int result = sum33(1, 2);
	printf("%d", result);

	return 0; //== ���α׷� ��ġ�� 0 �������
}


//���� : ���� �����ϴ� ����
//�Լ�: �ڵ带 �����ϴ� �׷� (��ɴ����� ����)

