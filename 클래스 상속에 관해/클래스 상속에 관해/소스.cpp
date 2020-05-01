#include<iostream>
using namespace std;

class parent 
{
protected:
	int soul=1234;
public :
	void setsoul(int soul)
	{
		this->soul = soul;
	}
	int getblack()
	{
		return soul;
	}

};
class mother : public parent
{
protected: 
	int ab = 1234;
};

class jak : public mother
{

};
int main()
{
	int b;
	jak myname;
	cin >> b;
	myname.setsoul(b);
	cout << myname.getblack();


	return 0;
}
