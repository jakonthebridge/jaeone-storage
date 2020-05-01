#include<iostream>
using namespace std;

int main()
{
	string bb = "ㅠㅠㅠ";
	cout << bb << endl;
	cout << &bb << endl; //작업중인 변수의 주소가 포인터에 할당된다.

	string food = "ppppap";
	string* bad = &food; // 포인터 변수 생성 예시
	cout << food << endl;
	cout << &food << endl; // 포인터의 유형은 작업중인 변수의 유형과 같아야 한다 
	cout << bad << endl;


}