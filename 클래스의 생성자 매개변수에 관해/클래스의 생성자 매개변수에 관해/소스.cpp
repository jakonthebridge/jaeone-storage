#include<iostream>
using namespace std;

class Student
{
public:
	int year;
	string name, where;
	Student(string x, string y, int z)
	{
		name = x;
		where = y;
		year = z;
	}
};

int main()
{
	int c = 0;
	string a;
	string b;
	cin >> a >> b >> c;
	Student aa(a,b,c);
	
	cout << aa.name << aa.year << aa.where;
	return 0;
}