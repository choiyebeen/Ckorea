#include<stdio.h>
void main11() {
	//비교 연산자에서 1번은 맞다, 0번은 아니다로 통한다.
	int num1, num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	// 1. 같다 ==
	printf("같다 : %d\n", num1 == num2);

	// 2. 다르다. !=
	printf("다르다 : %d\n", num1 != num2);

	// 3. 작다. <
	printf("작다 : %d\n", num1 < num2);

	// 4. 작거나 같다. <=
	printf("작거나 같다 : %d\n", num1 <= num2);

	//5. 크다. >
	printf("크다 %d\n", num1 > num2);

	// 6. 크거나 같다. >=
	printf("크거나 같다 : %d\n", num1 >= num2);

	//관계연산자 (&& : and / || : or / ! : not)
	int num3 = 0;

	// 그리고 end && 앞뒤 모두 맞아야 맞는 것 아니면 틀림
	printf("\n 그리고 : %d\n", num1 == num2 && num1 == num3);  //end

	// 혹은 or || 앞뒤 하나만 맞으면 맞음
	printf("\n 혹은 %d\n", num1 == num2 || num1 == num3); //or

	//  1 : 반대로 (참이면 거짓으로 거짓이면 참으로)
	printf(" \n not : %d\n", !(num1 > num2)); // not

}