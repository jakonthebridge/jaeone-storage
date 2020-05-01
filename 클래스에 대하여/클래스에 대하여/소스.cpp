#include<iostream>
#include<string>
using namespace std;

class test // class 선언 //
{
public:
	// 멤버 변수 선언? //
	int speed;
	int gear;
	string color;
 // 멤버 함수 선언 //
	void speedup()
	{
		speed += 10;
	}
	void speeddown()
	{
		speed -= 10;
	}
	void show()
	{
		cout << speed << endl << gear << endl << color <<endl;
	}


};
int main()
{
	test p1,p2; // 객체2개 선언 //
	p1.speed = 100;
	p1.gear = 3;
	p1.color = "red";
	p1.speedup();
	p1.speeddown();
	p2.speed = 100;
	p2.gear = 3;
	p2.color = "red";
	p2.speedup();
	p2.speeddown();
	p1.show();
	p2.show();
	return 0;
}