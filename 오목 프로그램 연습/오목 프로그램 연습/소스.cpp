#include<stdio.h>
#include <stdlib.h>

#define xsize 10
#define ysize 10
int main()
{
	int array[xsize][ysize] = { 0, };//10*10�� �� ���� ���� 
	int back_array[xsize][ysize] = { 0, };
	int a, b,time;
	for (time = 0; time <= 10; time++)
	{
		scanf_s("%d", &a);
		scanf_s("%d", &b);


		for (int i = 0; i < xsize; i++)
		{
			for (int j = 0; j < ysize; j++)
			{
				array[a][b] = 1;
				back_array[a][b] = back_array[a + 1][b] + 1;
				back_array[a][b] = back_array[a + 1][b+1] + 1;
				back_array[a][b] = back_array[a - 1][b] + 1;
				back_array[a][b] = back_array[a - 1][b-1] + 1;
				back_array[a][b] = back_array[a][b + 1] + 1;
				back_array[a][b] = back_array[a - 1][b + 1] + 1;
				back_array[a][b] = back_array[a][b - 1] + 1;
				back_array[a][b] = back_array[a+1][b - 1] + 1;
				printf("%2d", array[i][j]);
			}
			printf("\n");
		}
		
		
			int g = 0, h = 0;
			int max=0;
			for (g = 0; g <= xsize; g++)
			{
				for (h = 0; h <= ysize; h++)
				{

					if (max < back_array[g][h])
					{
						max = back_array[g][h];
						//max�� ������ array[i]�� ũ�� max = array[i]
						printf("\n");
						printf("%d,%d �� ��׶����� �ִ밪�̴�.", g, h);
						printf("\n");
						if (back_array[g][h] != 1 && back_array[g][h] == max)
						{
							array[g][h] = 2;// 2 ����
							back_array[g][h] = back_array[g + 1][h] - 1;
							back_array[g][h] = back_array[g + 1][h + 1] - 1;
							back_array[g][h] = back_array[g - 1][h] - 1;
							back_array[g][h] = back_array[g - 1][h - 1] - 1;
							back_array[g][h] = back_array[g][h + 1] - 1;
							back_array[g][h] = back_array[g - 1][h + 1] - 1;
							back_array[g][h] = back_array[g][h - 1] - 1;
							back_array[g][h] = back_array[g + 1][h - 1] - 1;
						}

						if (back_array[g][h] != 1 && back_array[g][h] == max)
						{
							array[g][h] = 2; // 2 ����
							back_array[g][h] = back_array[g + 1][h] - 1;
							back_array[g][h] = back_array[g + 1][h + 1] - 1;
							back_array[g][h] = back_array[g - 1][h] - 1;
							back_array[g][h] = back_array[g - 1][h - 1] - 1;
							back_array[g][h] = back_array[g][h + 1] - 1;
							back_array[g][h] = back_array[g - 1][h + 1] - 1;
							back_array[g][h] = back_array[g][h - 1] - 1;
							back_array[g][h] = back_array[g + 1][h - 1] - 1;
						}
						else if (back_array[g][h] == 1 && back_array[g][h] == max)
						{
							array[g + 1][h - 1] = 2;
							back_array[g + 1][h - 1] = back_array[g + 2][h-1] - 1;
							back_array[g + 1][h - 1] = back_array[g + 2][h ] - 1;
							back_array[g + 1][h - 1] = back_array[g ][h-1] - 1;
							back_array[g + 1][h - 1] = back_array[g ][h - 2] - 1;
							back_array[g + 1][h - 1] = back_array[g +1][h ] - 1;
							back_array[g + 1][h - 1] = back_array[g ][h ] - 1;
							back_array[g + 1][h - 1] = back_array[g+1][h - 2] - 1;
							back_array[g + 1][h - 1] = back_array[g + 2][h - 2] - 1;
						}
					}
				}
			}
		
		





		for (int i = 0; i <= 10; i++)
		{
			for (int j = 2; j <= 7; j++)
			{
				if (array[i][j - 2] == 1 && array[i][j - 1] == 1 && array[i][j] == 1 && array[i][j + 1] == 1 && array[i][j + 2] == 1) // ������ Ȯ��
				{
					printf("������ ��� ����");
				}
			}
		}

		for (int i = 2; i <= 7; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (array[i - 2][j] == 1 && array[i - 1][j] == 1 && array[i][j] == 1 && array[i + 1][j] == 1 && array[i + 2][j] == 1) // ������ Ȯ��
				{
					printf("���� ��� ����");
				}
			}
		}
		for (int i = 2; i < 18; i++)
		{						// �� for���� �밢�� ������ �˻��ϱ� ���� for���Դϴ�.
			for (int j = 2; j < 18; j++)
			{					// ���ο� ���� �� �� ���ÿ� �˻縦 �ؾ��ϱ� ������ �˻������ ���� �����ϴ�.
				if (array[i - 2][j - 2] == 1 && array[i - 1][j - 1] == 1 && array[i][j] == 1 && array[i + 1][j + 1] == 1 && array[i + 2][j + 2] == 1)
				{
					printf("�밢��1 ��� ����");
				}
				else if (array[i + 2][j - 2] == 1 && array[i + 1][j - 1] == 1 && array[i][j] == 1 && array[i - 1][j + 1] == 1 && array[i - 2][j + 2] == 1)
				{
					printf("�밢�� 2 ��� ����");
				}
				else if (array[i + 1][j + 1] == 1 && array[i + 1][j - 1] == 1 && array[i][j] == 1 && array[i - 1][j + 1] == 1 && array[i - 1][j - 1] == 1)
				{
					printf("33���");
				}
			}
		}

	}
	return 0;
}