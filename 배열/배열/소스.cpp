#include <stdio.h>
#define xsize 10  
#define ysize 10 

int main()
{
    int array[xsize][ysize] = { 0, }; // 2차원 배열 생성후 0으로 초기화 
    int i, j,c,b,time; // for 구문을 돌리기 위해 사용될 변수 
    int a = 1; // 초기값을 1로.. 
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
        //배열에 숫자 입력    


        for (i = 0; i < xsize; i++)
        {
            for (j = 0; j < ysize; j++)
            {
                array[c][b] = 2;
                printf("%2d ", array[i][j]);
            }
            printf("\n"); //한줄이 끝나면 개행 
        }
    }

    return 0;
}