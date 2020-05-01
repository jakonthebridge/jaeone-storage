#include<iostream>
using namespace std;

int main()
{
	string myname= "전재원";
	string* ock = &myname;
	cout << *ock << endl << myname << endl << ock;
	cout << endl << &ock << endl << &myname;
	// ock 랑 &myname은 같은 메모리다 하지만 &ock는 다른 주소다?? //
// &myname과 ock는 위치가 같다 하지만 &ock는 다른 위치를 불러온다//


}