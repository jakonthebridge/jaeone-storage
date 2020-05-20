#include<stdio.h>
using namespace std;

int main()
{
	int x=0, y=0, z=0;
	
	for (x = 1; x <= 6; x++)
		{
			for (y = 1; y <= 5; y++)
			{
				int z = 10 - x - y;
				if (z >= 0)
				{
					printf("%d+%d+%d\n", x, y, z);
				}
			}
		}
	
	return 0;
}