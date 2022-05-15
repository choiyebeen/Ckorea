#include<stdio.h>
int main27() {
	char arr1[20] = "홍길동";
	int num1[20] = {1, 2, 3};
	int num2[3][2] = { {1,2},{3,4},{5,6} };

	//num2[0][0] , num[0][1]
	//num2[1][0] , num[1][1] // 뒤에꺼 뜻 > 0,1,2 번 순이니까 {3,4}에서 첫번째꺼는 3이니까 답 3
	//num2[2][0] , num[2][1]
	num2[2][0] = 7;


	printf("%d\n", num2[2][1]);
	char names[5][16] = {"홍길동","이무개","김철수","김영희","갑을"};

	printf("%s는 %d번이다", names[0], num1[0]);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", num1[i]);
	}



	//카페 메뉴 문제

	char menu[5][20] = { "아메리카노","카페라떼","카푸치노","아이스티","에스프레소" };
	int price[5] = { 3000, 3500, 4000, 2000, 1000 };
	printf("%s의 가격은 %d입니다\n", menu[0], price[0]);

	for (int i = 0; i < 6; i++) {
		printf("%s의 가격은 %d입니다\n", menu[i], price[i]);
	}

	return 0;
}