#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

//����ü
typedef struct MyInfo {
	int menu_num[4];
	char* cafe_name;
	char menu_name[4][64];
	int menu_price[4];
} SB;

//ī���[], �޴�[], ����[]


//�Լ�  (�޴��ֹ� : ��ȣ�� �Է¹޾Ƽ�, �޴��̸��� ������ ���)
void MenuOrder(SB* cafe);
//�Լ� (�޴� ���� ����)
void MenuModify(SB* cafe);

int main() {
	//ī��
	SB ������ = { {1,2,3,4}, "��Ÿ���� ������", {"�Ƹ޸�ī��","ī���"}, {1500,2000} };
	SB  ��õ�� = { {1,2,3,4}, "��Ÿ���� ��õ��", {"īǪġ��","�׸�Ƽ��"}, {2000,2500} };
	SB �־��� = { {1,2,3,4}, "��Ÿ���� �־���", {"����������","ī���"}, {800,2000} };


	MenuOrder(&������);
	MenuOrder(&��õ��);
	MenuOrder(&�־���);

	return 0;
}
	//������

	//�޴��ֹ�
	//�񱳴� == ��

	//���࿹�� : ��Ÿ���� ���������� �Ƹ޸�ī�븦 1500���� �ֹ� �߽��ϴ�.


	void MenuOrder(SB * cafe)
	{
		int num = 0;
		printf("�ֹ��� �޴��� ��ȣ�� �Է��ϼ���\n");
		scanf_s("%d", &num);
		printf("%s���� %s�� %d���� �ֹ��߽��ϴ�.\n", (*cafe).cafe_name, (*cafe).menu_name[num - 1], (*cafe).menu_price[num - 1]);
	}


	void MenuModify(SB * cafe)
	{
		int num = 0, price=0;
		printf("������ �޴��� ��ȣ �Է� >>");
		scanf_s("%d", &num);
		printf("���� �Է� >>");
		scanf_s("%d", &price);
		(*cafe).menu_price[num - 1] = price;
	
	}