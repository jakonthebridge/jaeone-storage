#include <stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
#define xsize 10  
#define ysize 10 


int main()
{
    int array[xsize][ysize] = { 0, }; // 2���� �迭 ������ 0���� �ʱ�ȭ 
    int i, j,c,b,timetable; // for ������ ������ ���� ���� ���� 
    int a = 1; // �ʱⰪ�� 1��.. 
    srand(time(NULL));
    int random = (rand()%10);

    for (timetable = 0; timetable <=10; timetable++ )
    {
        scanf_s("%d", &c);
        scanf_s("%d", &b);
        for (i = 0; i < xsize; i++)
        {
            
            for (j = 0; j < ysize; j++)
            {
                array[c][b] = 2;
               
            }
                printf("%2d ", array[i][j]);      
        }
                  printf("\n"); //������ ������ ���� 
    }
        //�迭�� ���� �Է�    
    for (i = 2; i< 9; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[j][i - 2] == 2 && array[j][i - 1] == 2 && array[j][i] == 2 && array[j][i + 1] == 2 && array[j][i + 2] == 2)
            {
                printf("�÷��̾� ��");
            }
            else if (array[j][i - 2] == 2 && array[j][i - 1] == 2 && array[j][i] == 2 &&array[j][i + 1] == 2 && array[j][i + 2] == 2)
            {
                
                printf("���� ��");
            }

            else if (array[i - 2][j] == 1 && array[i - 1][j] == 1 && array[i][j] == 1 && array[i + 1][j] == 1 && array[i + 2][j] == 1) 
            {	// �̰� ���ι������� �˻��ϴ� �̴ϴ�. ����� �հ� �ڸ� �ٲٸ� �˴ϴ�.
                
                printf("�÷��̾� ��");     
            }
            else if (array[i - 2][j] == 2 && array[i - 1][j] == 2 && array[i][j] == 2 && array[i + 1][j] == 2 && array[i + 2][j] == 2)
            {
                printf("���� ��");
            }
        }
    }

    return 0;
    }

    
