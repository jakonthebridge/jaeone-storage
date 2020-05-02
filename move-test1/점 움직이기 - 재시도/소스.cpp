#include <iostream>      

using namespace std;              

class Point           //Point Ŭ���� ����.
{
private:                     // private�� �ܺη� �������� ����. ������ ��������.
    int xpos;
    int ypos;

public:                     // public�� �ܺη� ����� �� �ְ� �����
    void PointSet(int x, int y);
    void MovePos(int x, int y);   //���� ��ǥ�̵�
    void AddPoint(const Point& pos); //���� ��ǥ����
    void ShowPosition();    //���� x, y��ǥ���� ���
};

void Point::PointSet(int x, int y)    //����Ʈ ��ġ�� �������ִ� �Լ�.
                //  (Point::PointSet <- Point::�� ������ PointŬ���� ������ �Լ��� �ܺο��� �����ϱ� ����.)
{
    xpos = x;
    ypos = y;
}

void Point::MovePos(int x, int y)    //����Ʈ �̵�.
{
    xpos += x;
    ypos += y;
};

void Point::AddPoint(const Point& pos)    //�ٸ� ����Ʈ�� ��ġ�� (const�� ���ȭ��Ŵ. ��ȭ��Ű�� ���ϰ�.)
{
    xpos += pos.xpos;
    ypos += pos.ypos;
};

void Point::ShowPosition()    //����Ʈ ��ġ ���.      (��� ���¿� ����. [ x , y ] )
{
    cout << "[" << xpos << " , " << ypos << "]" << endl;
}


int main(void)
{
    Point pos1;               // Point Ŭ������ pos1�� ����.
    pos1.PointSet(12, 4);              // pos1�� ����Ʈ ��.
    Point pos2;
    pos2.PointSet(20, 30);

    pos1.MovePos(-7, 10);                      // pos1�� MovePos�Լ��� ���. (�Լ������� �׳� xpos�� ��� ������ ��.)
    pos1.ShowPosition();     // [5, 14] ���.

    pos1.AddPoint(pos2);
    pos1.ShowPosition();     // [25, 44] ���.

    return 0;
}
