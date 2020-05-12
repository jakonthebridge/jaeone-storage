#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int maproll[10][10] = { 0, };
	int x = 1;
	for (int i = 1; i < 10; i++)
	{
		for (int a = 1; a < 10; a++)
		{
			maproll[i][a] = x;
			printf("%d", &maproll);
		}
	}