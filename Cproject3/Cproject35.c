#include<stdio.h>

//����ü Person (�̸�,����,Ű,������)
typedef struct  person
{
	char* name;
	int age;
	int Ű;
	int ������;
};


int main35() {
	//����ü ���� 3�� (��ö��, ��¯��, ȫ�浿)
	struct  person ��ö�� = {"��ö��", 20, 170, 65};
	struct person ��¯�� = { "��¯��", 21, 180, 70};
	struct person ȫ�浿 = { "ȫ�浿", 22, 185,80 };


	//���� ���

	printf("%s,%d��,%dcm,%dkg\n", ��ö��.name, ��ö��.age, ��ö��.Ű, ��ö��.������);
	printf("%s,%d��,%dcm,%dkg\n", ��¯��.name, ��¯��.age, ��¯��.Ű, ��¯��.������);
	printf("%s,%d��,%dcm,%dkg\n", ȫ�浿.name, ȫ�浿.age, ȫ�浿.Ű, ȫ�浿.������);

	return 0;
}