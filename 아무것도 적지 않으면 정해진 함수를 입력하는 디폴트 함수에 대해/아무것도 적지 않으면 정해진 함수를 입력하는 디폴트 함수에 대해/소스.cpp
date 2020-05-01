#include<iostream>
using namespace std;

int bird(int a = 2, int b = 3)
{
	int result = a + b;
	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << bird();
	return 0;

}