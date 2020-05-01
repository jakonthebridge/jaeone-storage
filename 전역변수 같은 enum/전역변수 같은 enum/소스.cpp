#include<iostream>
using namespace std;

struct sttack
{
	int damage;
	int defense;
};
enum weapon
{
	sword1 = 10,
	absword = 100,
};
// 열거형은 정수로 평가된다//
int main()
{
	sttack anne;
	anne.damage = 10;

	cout << anne.damage + sword1; // 만약에 아이템을 하나만 가지고 다니게 하고 싶으면 아이템을 버리는 속성도 집어 넣어야한다. 그래야 다시 장착하니깐 //
}