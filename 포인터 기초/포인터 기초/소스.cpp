#include<iostream>
using namespace std;

int main()
{
	string bb = "�ФФ�";
	cout << bb << endl;
	cout << &bb << endl; //�۾����� ������ �ּҰ� �����Ϳ� �Ҵ�ȴ�.

	string food = "ppppap";
	string* bad = &food; // ������ ���� ���� ����
	cout << food << endl;
	cout << &food << endl; // �������� ������ �۾����� ������ ������ ���ƾ� �Ѵ� 
	cout << bad << endl;


}