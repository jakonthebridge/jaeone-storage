#include <stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
#define xsize 10  
#define ysize 10 


int main()
{
    int array[xsize][ysize] = { 0, }; // 2차원 배열 생성후 0으로 초기화 
    int i, j,c,b,timetable; // for 구문을 돌리기 위해 사용될 변수 
    int a = 1; // 초기값을 1로.. 
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
                  printf("\n"); //한줄이 끝나면 개행 
    }
        //배열에 숫자 입력    
    for (i = 2; i< 9; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[j][i - 2] == 2 && array[j][i - 1] == 2 && array[j][i] == 2 && array[j][i + 1] == 2 && array[j][i + 2] == 2)
            {
                printf("플레이어 승");
            }
            else if (array[j][i - 2] == 2 && array[j][i - 1] == 2 && array[j][i] == 2 &&array[j][i + 1] == 2 && array[j][i + 2] == 2)
            {
                
                printf("랜덤 승");
            }

            else if (array[i - 2][j] == 1 && array[i - 1][j] == 1 && array[i][j] == 1 && array[i + 1][j] == 1 && array[i + 2][j] == 1) 
            {	// 이건 세로방향으로 검사하는 겁니다. 행렬의 앞과 뒤를 바꾸면 됩니다.
                
                printf("플레이어 승");     
            }
            else if (array[i - 2][j] == 2 && array[i - 1][j] == 2 && array[i][j] == 2 && array[i + 1][j] == 2 && array[i + 2][j] == 2)
            {
                printf("랜덤 승");
            }
        }
    }

    return 0;
    }

    
