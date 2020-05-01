#include<iostream>
using namespace std;

class darksoul
{
private:
	int soul=12222222;
public:
	void setsoul(int soul) // setter 왠만하면 이름을 통일하라
	{
		this->soul = soul; // 자기자신을 리턴하고 싶을때
	}

	int getaaa()
	{
		return soul; // private로 리턴한다.
	}
};
int main()
{
	int a=0;
	darksoul charterLV; // darksoul의 객체
	cin >> a;
	charterLV.setsoul(a); // setaaa() 에서 매개변수 a를 가져와서 aa에 지정한다.
	cout << charterLV.getaaa();
	return 0;


}
