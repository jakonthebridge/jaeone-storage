#include<iostream>
using namespace std;

int main()
{
	string myname= "�����";
	string* ock = &myname;
	cout << *ock << endl << myname << endl << ock;
	cout << endl << &ock << endl << &myname;
	// ock �� &myname�� ���� �޸𸮴� ������ &ock�� �ٸ� �ּҴ�?? //
// &myname�� ock�� ��ġ�� ���� ������ &ock�� �ٸ� ��ġ�� �ҷ��´�//


}