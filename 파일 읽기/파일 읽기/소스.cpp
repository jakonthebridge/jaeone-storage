#include<iostream>
#include<fstream> //���������
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
	ofstream Myfile("test.txt");
	Myfile << "�׽�Ʈ��....";
	Myfile.close(); //����� �ݾ� ����Ѵ�.
	string text; //�׸��� ���� �� �Ʒ��� �Ѵ�.
	ifstream MyReadfile("test.txt");
	// ������ �о�� // ��� �̸��� ������� ��� �ȴ� ������ ��ü�����̴�. //
	while (getline(MyReadfile, text))
	{
		cout << text;
	}
	Sleep(10000); // �빮�� ����
	MyReadfile.close();
	return 0;
}