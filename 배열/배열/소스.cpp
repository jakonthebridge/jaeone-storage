#include <stdio.h>
#define xsize 10  
#define ysize 10 

int main()
{
    int array[xsize][ysize] = { 0, }; // 2���� �迭 ������ 0���� �ʱ�ȭ 
    int i, j,c,b,time; // for ������ ������ ���� ���� ���� 
    int a = 1; // �ʱⰪ�� 1��.. 
    for (time = 0; time <=10; time++ )
    {
        scanf_s("%d", &c);
        scanf_s("%d", &b);
        for (i = 0; i < xsize; i++)
        {
            for (j = 0; j < ysize; j++)
            {
                array[i][j] = a;
            }
        }
        //�迭�� ���� �Է�    


        for (i = 0; i < xsize; i++)
        {
            for (j = 0; j < ysize; j++)
            {
                array[c][b] = 2;
                printf("%2d ", array[i][j]);
            }
            printf("\n"); //������ ������ ���� 
        }
    }

    return 0;
}