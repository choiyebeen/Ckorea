#include<stdio.h>
void main20() {
	//���ǹ� if~else if~else
	int age = 20;
	//if (age > 19) {
	//	printf("���̴� %d�̰� �����̴�");
	//}
	//else if (age > 13) {
	//	printf("���̴� %d�̰� �����̴�.");
	//}
	//else {
	//	printf("���̴� %d�̰� ��̴�.");
	//}
	
	// ���ǹ� switch~case~break
	switch (age)
	{
	case 0:
		printf("�����Դϴ�");
		break;
	case 1:
		printf("10���Դϴ�");
		break;
	case 2:
		printf("20���Դϴ�");
		break;
	case 3:
		printf("30���Դϴ�.");
		break;
	default:
		printf("�ʰ�");
	}
}