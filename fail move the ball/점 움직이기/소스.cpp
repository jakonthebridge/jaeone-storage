#include<iostream>
using namespace std;

int main()
{
	const int num = 17;
	int move[num];
	int b;
	cin >> b;
	switch (b)
	{
	case 1:
	{
		{
			if (num < 20 && 0 <= num)
			{
				move[num + 1] = 1;
			}
			else(num < 20 && 0 <= num);
			{
				int a = NULL;
				move[a < num] = 0;
				move[num < a] = 0;
			}
			cout << move;
		}
		break;
	}

		
	}

	return 0;	
}