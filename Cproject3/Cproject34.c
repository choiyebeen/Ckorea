#include<stdio.h>

struct character
{
	char* name;
	int health;
	int damage;
};

int main34() {

	int health1, health2; //ü��
	char* name1, *name2; //�̸�
	int damage1, damage2; //���ݷ�

	int health[500]; //ü�� �迭
	char* name[500]; // �̸� �迭 
	int damage[500]; // ���ݷ� �迭

	typedef struct monster {
		char name[30];
	int health;
	int damage;
	char item[64];
	} mon;

	struct character �����;
	struct character �������� = {"��������",600,70};

	mon ���������� = { "������ ����", 5000, 100, "��ȯ" };
	mon ȭ���巡�� = { "ȭ���巡��", 5500,110, NULL };

	health1 = 530;
	name1 = "�����";
	damage1 = 60;

	health2 = 600;
	name2 = "��������";
	damage2 = 70;

	�����.name = "�����";
	�����.health = 600;
	�����.damage = 60;

#define char_count 2
	//ĳ���� ��� ���

	printf("ĳ���͸� : %s, ü�� : %d, ���ݷ� : %d\n", �����.name, �����.damage, �����.health);
	printf("���͸� : %s, ü�� : %d, ���ݷ�: %d, ������:%s\n", ����������.name, ����������.health, ����������.damage, ����������.item);

	return 0;

}