#include<stdio.h>

//备炼眉 Person (捞抚,唱捞,虐,个公霸)
typedef struct  person
{
	char* name;
	int age;
	int 虐;
	int 个公霸;
};


int main35() {
	//备炼眉 函荐 3俺 (辫枚荐, 脚炉备, 全辨悼)
	struct  person 辫枚荐 = {"辫枚荐", 20, 170, 65};
	struct person 脚炉备 = { "脚炉备", 21, 180, 70};
	struct person 全辨悼 = { "全辨悼", 22, 185,80 };


	//沥焊 免仿

	printf("%s,%d混,%dcm,%dkg\n", 辫枚荐.name, 辫枚荐.age, 辫枚荐.虐, 辫枚荐.个公霸);
	printf("%s,%d混,%dcm,%dkg\n", 脚炉备.name, 脚炉备.age, 脚炉备.虐, 脚炉备.个公霸);
	printf("%s,%d混,%dcm,%dkg\n", 全辨悼.name, 全辨悼.age, 全辨悼.虐, 全辨悼.个公霸);

	return 0;
}