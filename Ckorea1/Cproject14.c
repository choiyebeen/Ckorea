#include<stdio.h>
void main14() {
//���
	printf("hello world!\n");
	//���� (�������)
	//���� ���� (���� ����)
	int var1; // ����������������� (4ĭ, 4byte)
	float var2; // �Ҽ����ִ� ���������� ������� (4ĭ, 4btye)
	char var3; // ���������� ����������� (1ĭ, 1byte)

	//����
	var1 = 33;
	var2 = 33.3;
	var3 = "Ŀ��";


	char var4[255] = "hello world!"; //�����ʱ�ȭ
	
	//������ ���
	printf("%d, %f, %c, %s \n" , var1, var2, var3, var4);

	//�Է�
	scanf_s("%d", &var1);
	printf("%d", var1);

	scanf_s("%s", &var4, 255); //���ڿ��� �� ���̱��� �����־�� �Ѵ�.
	printf("%s", var4);



}