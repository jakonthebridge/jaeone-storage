#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;

int main()
{
	ofstream MyFile("���� ����� �׽�Ʈ.txt");
	// ������ ����� ����

	MyFile << "���� ����� �׽�Ʈ ������...";
	//���Ͽ� ���� ����
	Sleep(10000);
	// ������ ���Ͼȿ� �ִ�.
	MyFile.close();
}