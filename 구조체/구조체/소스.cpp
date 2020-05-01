#include<iostream>
using namespace std;

struct stack
{
	int attack;
	int defense;
	int healing;
	int hp;
}; // ; 빠트리지 말기 //
int main()
{
	int turn;

	stack anne;
	anne.attack = 10;
	anne.defense = 3;
	anne.healing = 1;
	anne.hp = 1;

	stack pray = { 100,100,100,100 };
	cout << anne.attack;
	
	

}