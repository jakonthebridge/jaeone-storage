#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

struct usersttack
{
	int attack;
	int defense;
	int heal;
	int hp;
};


int main()
{
	int aa;
	int dice = rand() % 6;
	int random = rand();
	int page;
	
	usersttack anne;
	anne.attack = 10 + rand() % 10;
	anne.defense = 10;
	anne.hp = 30;
	usersttack monster;
	monster.attack = 20;
	monster.defense = 4;
	monster.hp = 50;
	while (anne.hp > 0 && monster.hp > 0)
	{

		cout << "1,2,3,4" << endl;
		cin >> aa;
		cout << aa << "가 나왔다!";
		switch (aa)
		{
		case 1:
			cout << anne.attack << "의 데미지를 몬스터에게!";
			cout << monster.hp - anne.attack << "데미지 산출 과정" << endl;
			monster.hp = monster.hp - anne.attack;
			cout << monster.hp << endl;
			break;
		}
	}
}