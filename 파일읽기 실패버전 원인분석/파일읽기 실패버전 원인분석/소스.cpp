#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>

using namespace std;

struct stack
{
    string name;
    int hp;
    int attack;
    int defense;
};
int main()
{
    int a;
    stack anne = { "�� ���̾�",10,90,1 };
    stack pray = { "������ ���̾�",10000,100,4 };
    int roaddata; //������ �� �Ʒ��� �Ѵ�.
    ifstream MyReadfile("pray=hp.txt");
    MyReadfile.open("pray=hp.txt");
    MyReadfile >> roaddata;
    MyReadfile.close();
    while (anne.hp > 0 && pray.hp > 0)
    {
        cout << anne.name << endl << pray.name << endl;
        cout << "1,2,3,4," << endl;
        cout << "5���� ����" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << anne.attack << "�� ���ݵ������� ����!" << endl;
            cout << pray.hp - anne.attack << "������ �������" << endl;
            pray.hp = pray.hp - anne.attack;
            pray.hp = roaddata;
            cout << roaddata << "������ �������� �����" << endl;
            break;
        case 5:
            cout << "��������� ����" << endl;
            ofstream Myfile("pray=hp.txt");
            Myfile << pray.hp;
            Myfile.close();//����� �ݾ� ����Ѵ�.
            break;

        }
    }
    return 0;
