#include<stdio.h>


// C��� : �Լ� + ������ + ����ü
// �Լ� : �ڵ��� ��ȭ�� ���
// ����ü : �ڷ����� ��ȭ
//������ : �Լ����� ���


typedef struct MyInfo {
	char name[64];
	int age;
} MI;

int ModifyAge(MI* person) {
	printf("���̸� �����մϴ� >>");
	scanf_s("%d", &((*person).age));

	return 0;
}

int ModifyName(MI* person) {
	printf("�̸��� �����մϴ�>>");
	scanf_s("%s",(*person).name, 64);
}

int main371() {
	MI ö�� = { "��ö��",20 };
	MI ¯�� = { "��¯��", 21 };
	int data = 0;
	char asd[3];

	ModifyAge(&¯��);
	printf("%s, %d\n", ¯��.name, ¯��.age);

	ModifyAge(&ö��);
	printf("%s, %d\n", ö��.name, ö��.age);



	return 0;
}