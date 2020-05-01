#include<iostream>
#include<cmath>
using namespace std;

void main()
{
	int n = 1;
	double sum = 1.0;
	double err = 100.0;
	while (err > 0.0001)
	{
		sum += pow(-1, n) / double(++n);
		err = fabs(sum - log(2.0));
	}
	cout << "sum = " << sum << endl;
	cout << "ln2 = " << log(2.0) << endl;
	cout << "iter n = " << n << endl;
	cout << "err = " << err << endl;
	
}