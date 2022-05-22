#include<stdio.h>

struct character
{
	char* name;
	int health;
	int damage;
};

int main34() {

	int health1, health2; //체력
	char* name1, *name2; //이름
	int damage1, damage2; //공격력

	int health[500]; //체력 배열
	char* name[500]; // 이름 배열 
	int damage[500]; // 공격력 배열

	typedef struct monster {
		char name[30];
	int health;
	int damage;
	char item[64];
	} mon;

	struct character 이즈리얼;
	struct character 마스터이 = {"마스터이",600,70};

	mon 협곡의정령 = { "협곡의 정령", 5000, 100, "소환" };
	mon 화염드래곤 = { "화염드래곤", 5500,110, NULL };

	health1 = 530;
	name1 = "이즈리얼";
	damage1 = 60;

	health2 = 600;
	name2 = "마스터이";
	damage2 = 70;

	이즈리얼.name = "이즈리얼";
	이즈리얼.health = 600;
	이즈리얼.damage = 60;

#define char_count 2
	//캐릭터 목록 출력

	printf("캐릭터명 : %s, 체력 : %d, 공격력 : %d\n", 이즈리얼.name, 이즈리얼.damage, 이즈리얼.health);
	printf("몬스터명 : %s, 체력 : %d, 공격력: %d, 아이템:%s\n", 협곡의정령.name, 협곡의정령.health, 협곡의정령.damage, 협곡의정령.item);

	return 0;

}