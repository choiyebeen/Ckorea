#include<stdio.h>
void main14() {
//출력
	printf("hello world!\n");
	//변수 (저장공간)
	//변수 선언 (공간 생성)
	int var1; // 숫자형태의저장공간 (4칸, 4byte)
	float var2; // 소수점있는 숫자형태의 저장공간 (4칸, 4btye)
	char var3; // 문자형태의 저장공간만듬 (1칸, 1byte)

	//대입
	var1 = 33;
	var2 = 33.3;
	var3 = "커피";


	char var4[255] = "hello world!"; //변수초기화
	
	//변수의 출력
	printf("%d, %f, %c, %s \n" , var1, var2, var3, var4);

	//입력
	scanf_s("%d", &var1);
	printf("%d", var1);

	scanf_s("%s", &var4, 255); //문자열은 총 길이까지 적어주어야 한다.
	printf("%s", var4);



}