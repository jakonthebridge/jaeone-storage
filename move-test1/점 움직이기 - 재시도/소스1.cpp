#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	int xwhere=1, ywhere =1; 
	int control=0;

	cout << "처음 위치" << xwhere << "," << ywhere<<endl;

	while (xwhere >= 0 && ywhere >= 0)
	{
		cin >> control;
		switch (control)
		{
		case 1:
			xwhere = xwhere + 1;
			cout << "현재 위치" << xwhere << "," <<ywhere <<endl;
			{ofstream Myfile("파일위치.txt");
			Myfile << xwhere << "," << ywhere << endl; // 저장되는 위치를 구분할 필요가 있다. 또한 원한다면 로드 할 수 있게 만들어야 한다.
			Myfile.close(); }
			break; 
		case 2:
			xwhere = xwhere - 1;
			cout << "현재 위치" << xwhere << "," << ywhere <<endl;
			{ofstream Myfile("파일위치.txt");
			Myfile << xwhere << "," << ywhere << endl;
			Myfile.close(); }
			break; 
		case 3:
			ywhere = ywhere + 1;
			cout << "현재 위치" << xwhere << "," << ywhere << endl;
			{ofstream Myfile("파일위치.txt");
			Myfile << xwhere << "," << ywhere << endl;
			Myfile.close(); }
			break; 
		case 4:
			ywhere = ywhere - 1;
			cout << "현재 위치" << xwhere << "," << ywhere << endl;
			{ofstream Myfile("파일위치.txt");
			Myfile << xwhere << "," << ywhere << endl;
			Myfile.close(); }
			break; 
		}
	}
}