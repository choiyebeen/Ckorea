#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#define PI 2;

//�Լ� : �ڵ带 �����ϴ� ��� (��ɴ����� ����)
int information(int num) {
	if (num == 1) {
		printf("1���� �����Ͽ����ϴ�.\n");
		return 1;
		printf("�����ڵ�\n");
	}
	else if (num == 2) {
		printf("2���� �����Ͽ����ϴ�.\n");
		return 2;
		printf("�����ڵ�\n");
	}
	else {
		printf("�߸��Է���\n");
		return -1;
		printf("�����ڵ�\n");
	}
	return 0;
	printf("�����ڵ�\n");
	printf("�����ڵ�\n");
}

int main33() {
	int num = 0;
	scanf_s("%d", &num);
	num = information(num);
	printf("%d\n", num);


	return 0;
}