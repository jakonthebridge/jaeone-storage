#include<iostream>
#include<fstream> //파일입출력
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
	ofstream Myfile("test.txt");
	Myfile << "테스트중....";
	Myfile.close(); //만들고 닫아 줘야한다.
	string text; //그리고 선언도 그 아래에 한다.
	ifstream MyReadfile("test.txt");
	// 파일을 읽어낸다 // 사실 이름은 마음대로 지어도 된다 일종의 개체개념이다. //
	while (getline(MyReadfile, text))
	{
		cout << text;
	}
	Sleep(10000); // 대문자 유의
	MyReadfile.close();
	return 0;
}