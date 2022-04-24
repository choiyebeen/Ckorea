#include <stdio.h>
void main8() {
	int num1, num2;

	num1 = 3;
	num2 = 4;

	num1 += 3; // ==> num1 = num1 + 3;
	printf("%d, ", num1);

	num1 -= 3; // ==> num1 = num1 - 3;       , 왠만하면 더하기와 빼기만 이렇게 사용한다.
	printf("%d, ", num1);

	num2++;  //==> num2 += 1;     // ==> num2 = num2 + 1; 
	printf("%d, ", num2);

	num2--; // ==> num2-= 1; // ==> num2 = num2 -1;
	printf("%d, ", num2);
}