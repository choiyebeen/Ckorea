#include<stdio.h>
void main11() {
	//�� �����ڿ��� 1���� �´�, 0���� �ƴϴٷ� ���Ѵ�.
	int num1, num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	// 1. ���� ==
	printf("���� : %d\n", num1 == num2);

	// 2. �ٸ���. !=
	printf("�ٸ��� : %d\n", num1 != num2);

	// 3. �۴�. <
	printf("�۴� : %d\n", num1 < num2);

	// 4. �۰ų� ����. <=
	printf("�۰ų� ���� : %d\n", num1 <= num2);

	//5. ũ��. >
	printf("ũ�� %d\n", num1 > num2);

	// 6. ũ�ų� ����. >=
	printf("ũ�ų� ���� : %d\n", num1 >= num2);

	//���迬���� (&& : and / || : or / ! : not)
	int num3 = 0;

	// �׸��� end && �յ� ��� �¾ƾ� �´� �� �ƴϸ� Ʋ��
	printf("\n �׸��� : %d\n", num1 == num2 && num1 == num3);  //end

	// Ȥ�� or || �յ� �ϳ��� ������ ����
	printf("\n Ȥ�� %d\n", num1 == num2 || num1 == num3); //or

	//  1 : �ݴ�� (���̸� �������� �����̸� ������)
	printf(" \n not : %d\n", !(num1 > num2)); // not

}