#include<stdio.h>
void main() {

	int num = 2;
	switch (num)
	{
	case 0: 
		printf("선택은 0번입니다.");
		break;
	case 1:
		printf("선택은 1번입니다.");
		break;
	case 2:
		printf("선택은 2번입니다.");
		break;
	default:
		printf("일치하는 번호가 없습니다.");
	}




	/*
	//소괄호안에있는 값이 case에 있는 값과 같 으면 해당 코드를 실행
	switch (1)
	{
	case 0:
			break;
	case 1:
				printf("1");
				break;
	case 2:
					printf("2");
					break;
				default:
					printf("일치하는 값이 없음");
	}
	*/
}