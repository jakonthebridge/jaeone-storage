#include<iostream>
using namespace std;

class darksoul
{
private:
	int soul=12222222;
public:
	void setsoul(int soul) // setter �ظ��ϸ� �̸��� �����϶�
	{
		this->soul = soul; // �ڱ��ڽ��� �����ϰ� ������
	}

	int getaaa()
	{
		return soul; // private�� �����Ѵ�.
	}
};
int main()
{
	int a=0;
	darksoul charterLV; // darksoul�� ��ü
	cin >> a;
	charterLV.setsoul(a); // setaaa() ���� �Ű����� a�� �����ͼ� aa�� �����Ѵ�.
	cout << charterLV.getaaa();
	return 0;


}
