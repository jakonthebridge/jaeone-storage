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
// �������� ������ �򰡵ȴ�//
int main()
{
	sttack anne;
	anne.damage = 10;

	cout << anne.damage + sword1; // ���࿡ �������� �ϳ��� ������ �ٴϰ� �ϰ� ������ �������� ������ �Ӽ��� ���� �־���Ѵ�. �׷��� �ٽ� �����ϴϱ� //
}