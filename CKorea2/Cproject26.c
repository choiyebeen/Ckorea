#include<stdio.h>

int main26() {
	 //배열 (변수를 나열함 쓰기 좋게)
	char c1 = 'H';
	char c2 = 'e';
	char c3 = 'l';
	char c4 = 'o';
	char hello[5] = { 'h','e','l','l','o' };
	char str[7] = "hello";

	printf("%c%c%c%c%c \n", c1, c2, c3, c3, c4);
	printf("%s\n", hello);
	printf("%s\n", str);
	

	//출석
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num[10] = {1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d\n", num[i]);
	}

	printf("%d\n", num1); // num[0]
	printf("%d\n", num2); // num[1]
	printf("%d\n", num3); // num[2]

	printf("%d\n", num[0]); // num[0]
	printf("%d\n", num[1]); // num[1]
	printf("%d\n", num[2]); // num[2]

	// num+0, num+1, num+2, num+ 3 ..... num+n 
	// 약간 붙여넣는 느낌임


	return 0;
}

//배열