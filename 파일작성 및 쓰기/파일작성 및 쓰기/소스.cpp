#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;

int main()
{
	ofstream MyFile("파일 만들기 테스트.txt");
	// 파일을 만들고 연다

	MyFile << "파일 만들기 테스트 진행중...";
	//파일에 글을 쓴다
	Sleep(10000);
	// 저장은 파일안에 있다.
	MyFile.close();
}