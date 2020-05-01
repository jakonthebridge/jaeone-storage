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
    stack anne = { "앤 마이어",10,90,1 };
    stack pray = { "프레이 마이어",10000,100,4 };
    int roaddata; //선언은 그 아래에 한다.
    ifstream MyReadfile("pray=hp.txt");
    MyReadfile.open("pray=hp.txt");
    MyReadfile >> roaddata;
    MyReadfile.close();
    while (anne.hp > 0 && pray.hp > 0)
    {
        cout << anne.name << endl << pray.name << endl;
        cout << "1,2,3,4," << endl;
        cout << "5번은 저장" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << anne.attack << "의 공격데미지가 들어갔다!" << endl;
            cout << pray.hp - anne.attack << "데미지 산출과정" << endl;
            pray.hp = pray.hp - anne.attack;
            pray.hp = roaddata;
            cout << roaddata << "지금의 프레이의 생명력" << endl;
            break;
        case 5:
            cout << "저장시퀸스 시작" << endl;
            ofstream Myfile("pray=hp.txt");
            Myfile << pray.hp;
            Myfile.close();//만들고 닫아 줘야한다.
            break;

        }
    }
    return 0;
