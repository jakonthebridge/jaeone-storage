#include<iostream>
using namespace std;

class parent
{
public:
		
	void test1()
	{
		cout << "�θ��";
	}
public:
	parent() // ������: Ŭ������ ������ �̸��� ��ȣ�� ����Ѵ�.
	{
		cout << "�ȳ�" << endl; //
	}
};

class man :public parent // ��ӹ��� Ŭ���� �տ� ���й��� �ٿ����Ѵ�. //
{
public: // �ۺ��� �ܺο����� ������ �����ϴ� //
	void test2()
	{
		cout << "�ڽ�";
	}

	
};

int main()
{
	parent aa;// �̷��� ȣ���� ���ص� �׳� ������ ���� �������ΰ��̴�//
	
	man ss; // ���ϰ� �ι� �����µ� ������ man�� parent�� ���θ� ��ӹ޾ұ⿡ ���ϰ� �ѹ� �� ȣ��Ǵ°��̴�. //
	ss.test1();
	ss.test2();
	return 0;
}