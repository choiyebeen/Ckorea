#include <stdio.h>
void main() {
	int num;
	float fnum;
	char c;
	char cc[256] = "점심 메뉴";
	
	num = 1;
	fnum = 3.14;
	c = 'g';
	
	printf("%d\n", num);
	printf("%2f\n", fnum);
	printf("%c\n",c);
	printf("%s\n", cc);

	printf("%d,%f,%c,%s\n", num, fnum, c, cc);

}