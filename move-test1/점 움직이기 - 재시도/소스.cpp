#include <iostream>      

using namespace std;              

class Point           //Point 클래스 선언.
{
private:                     // private은 외부로 공유하지 않음. 정보를 은닉해줌.
    int xpos;
    int ypos;

public:                     // public은 외부로 사용할 수 있게 열어둠
    void PointSet(int x, int y);
    void MovePos(int x, int y);   //점의 좌표이동
    void AddPoint(const Point& pos); //점의 좌표증가
    void ShowPosition();    //현재 x, y좌표정보 출력
};

void Point::PointSet(int x, int y)    //포인트 위치를 지정해주는 함수.
                //  (Point::PointSet <- Point::의 이유는 Point클래스 내부의 함수를 외부에서 정의하기 때문.)
{
    xpos = x;
    ypos = y;
}

void Point::MovePos(int x, int y)    //포인트 이동.
{
    xpos += x;
    ypos += y;
};

void Point::AddPoint(const Point& pos)    //다른 포인트와 합치기 (const는 상수화시킴. 변화시키지 못하게.)
{
    xpos += pos.xpos;
    ypos += pos.ypos;
};

void Point::ShowPosition()    //포인트 위치 출력.      (출력 형태에 따라. [ x , y ] )
{
    cout << "[" << xpos << " , " << ypos << "]" << endl;
}


int main(void)
{
    Point pos1;               // Point 클래스로 pos1을 만듬.
    pos1.PointSet(12, 4);              // pos1의 포인트 셋.
    Point pos2;
    pos2.PointSet(20, 30);

    pos1.MovePos(-7, 10);                      // pos1의 MovePos함수를 사용. (함수내에서 그냥 xpos로 사용 가능한 것.)
    pos1.ShowPosition();     // [5, 14] 출력.

    pos1.AddPoint(pos2);
    pos1.ShowPosition();     // [25, 44] 출력.

    return 0;
}
