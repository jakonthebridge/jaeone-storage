#include<stdio.h>

int main()
{
	int array[5][5] = { {1,1,1,1,1}, { 2,2,2,2,2}, { 2,2,2,2,2}, { 2,2,2,2,2 } , { 2,2,2,2,2 } };//5*5의 맵 세로 가로 

	for (int i = 0; i < 6; i++)
	{
		for (int j = 2; j< 6;j++)
		{
			if (array[i][j - 2] == 1 && array[i][j - 1] == 1 && array[i][j] == 1 && array[i][j+1] == 1 && array[i][j + 2] == 1) // 가로줄 확인
			{
				printf("결과 산출");
			}
		}
	}
	return 0;
}