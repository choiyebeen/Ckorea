#include<stdio.h>

/* void sum(int var1, int var2, int var3) {
	printf("%d\n", var1+var2+var3);
}

//sub : �μ��� ���� ������ �ִٸ� ������ ����� �ٲ�



void main() { // main�̶�� �̸��� �Լ�

	//�Լ� : �ڵ带 �����ϴ� ��� ( ������ �־����� �������δ� �� �� ���� ����� �����ϱ����� ��������� ��� )
	// ��ɴ����� ����, �Ұ�ȣ �پ�����

	sum(50,20,10);
	sum(10, 20,30);
	sum(1, 2,3);




	// sub(-10, -5); */

//sub ���� 

void sum(int var1, int var2) {
	printf("%d\n", var2 + var1);
}

void sub(int var1, int var2) { 
	if (var1 < 0) {
		var1 = var1 * -1;
	}
	if (var2 < 0) {
		var2= var2 * -1;
	}
	printf("%d\n", var1-var2);
}

void main23(){
	sub(-10,-5);
}


// div ����



