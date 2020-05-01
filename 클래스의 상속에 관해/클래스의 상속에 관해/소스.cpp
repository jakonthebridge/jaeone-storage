#include<iostream>
using namespace std;

class parent
{
public:
		
	void test1()
	{
		cout << "부모와";
	}
public:
	parent() // 생성자: 클래스와 동일한 이름과 괄호를 사용한다.
	{
		cout << "안녕" << endl; //
	}
};

class man :public parent // 상속받을 클래스 앞에 구분문자 붙여야한다. //
{
public: // 퍼블릭은 외부에서도 접근이 가능하다 //
	void test2()
	{
		cout << "자식";
	}

	
};

int main()
{
	parent aa;// 이렇게 호출을 안해도 그냥 나오는 것이 생성자인것이다//
	
	man ss; // 하하가 두번 나오는데 이유는 man은 parent의 전부를 상속받았기에 하하가 한번 더 호출되는것이다. //
	ss.test1();
	ss.test2();
	return 0;
}