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
		cout << aa << "�� ���Դ�!";
		switch (aa)
		{
		case 1:
			cout << anne.attack << "�� �������� ���Ϳ���!";
			cout << monster.hp - anne.attack << "������ ���� ����" << endl;
			monster.hp = monster.hp - anne.attack;
			cout << monster.hp << endl;
			break;
		}
	}
}