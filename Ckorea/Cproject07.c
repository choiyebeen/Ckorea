#include<stdio.h>
void main7() {
	//국어 84, 수학 78, 영어 88
	//총점 평균
	// 결과예시 : 총점은 000점이고, 평균은 000입니다.

	int 국어 = 84;
	int 수학 = 78;
	int 영어 = 88; // 인수명 한글로 하는거 별로 안 좋음 처음부터 영어로 ㄱㄱ


	int average = (국어 + 수학 + 영어) / 3;
	int total = 국어 + 수학 + 영어;

	// 선생님 버전
	// int 합계 = 국어 + 수학+영어;
	// float 평균 = 합계 / 3.0f;
	// printf("총점은 %d점이고 평균은 %f점이다 ",합계,평균);

	printf("총점은 %d\n", total);
	printf("평균은 %d\n", average);
	
}