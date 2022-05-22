#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

//구조체
typedef struct MyInfo {
	int menu_num[4];
	char* cafe_name;
	char menu_name[4][64];
	int menu_price[4];
} SB;

//카페명[], 메뉴[], 가격[]


//함수  (메뉴주문 : 번호를 입력받아서, 메뉴이름과 가격을 출력)
void MenuOrder(SB* cafe);
//함수 (메뉴 가격 변경)
void MenuModify(SB* cafe);

int main() {
	//카페
	SB 부평점 = { {1,2,3,4}, "스타벅스 부평점", {"아메리카노","카페라떼"}, {1500,2000} };
	SB  인천점 = { {1,2,3,4}, "스타벅스 인천점", {"카푸치노","그린티라떼"}, {2000,2500} };
	SB 주안점 = { {1,2,3,4}, "스타벅스 주안점", {"에스프레소","카페라떼"}, {800,2000} };


	MenuOrder(&부평점);
	MenuOrder(&인천점);
	MenuOrder(&주안점);

	return 0;
}
	//포인터

	//메뉴주문
	//비교는 == 로

	//실행예시 : 스타벅스 부평점에서 아메리카노를 1500원에 주문 했습니다.


	void MenuOrder(SB * cafe)
	{
		int num = 0;
		printf("주문할 메뉴의 번호를 입력하세요\n");
		scanf_s("%d", &num);
		printf("%s에서 %s를 %d원에 주문했습니다.\n", (*cafe).cafe_name, (*cafe).menu_name[num - 1], (*cafe).menu_price[num - 1]);
	}


	void MenuModify(SB * cafe)
	{
		int num = 0, price=0;
		printf("수정할 메뉴의 번호 입력 >>");
		scanf_s("%d", &num);
		printf("가격 입력 >>");
		scanf_s("%d", &price);
		(*cafe).menu_price[num - 1] = price;
	
	}