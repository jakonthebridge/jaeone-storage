#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	int xwhere=1, ywhere =1; 
	int control=0;

	cout << "ó�� ��ġ" << xwhere << "," << ywhere<<endl;

	while (xwhere >= 0 && ywhere >= 0)
	{
		cin >> control;
		switch (control)
		{
		case 1:
			xwhere = xwhere + 1;
			cout << "���� ��ġ" << xwhere << "," <<ywhere <<endl;
			{ofstream Myfile("������ġ.txt");
			Myfile << xwhere << "," << ywhere << endl; // ����Ǵ� ��ġ�� ������ �ʿ䰡 �ִ�. ���� ���Ѵٸ� �ε� �� �� �ְ� ������ �Ѵ�.
			Myfile.close(); }
			break; 
		case 2:
			xwhere = xwhere - 1;
			cout << "���� ��ġ" << xwhere << "," << ywhere <<endl;
			{ofstream Myfile("������ġ.txt");
			Myfile << xwhere << "," << ywhere << endl;
			Myfile.close(); }
			break; 
		case 3:
			ywhere = ywhere + 1;
			cout << "���� ��ġ" << xwhere << "," << ywhere << endl;
			{ofstream Myfile("������ġ.txt");
			Myfile << xwhere << "," << ywhere << endl;
			Myfile.close(); }
			break; 
		case 4:
			ywhere = ywhere - 1;
			cout << "���� ��ġ" << xwhere << "," << ywhere << endl;
			{ofstream Myfile("������ġ.txt");
			Myfile << xwhere << "," << ywhere << endl;
			Myfile.close(); }
			break; 
		}
	}
}