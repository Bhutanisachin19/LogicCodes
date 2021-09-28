#include<iostream>
using namespace std;


class demo
{
public:
    static int a;
    float f;
    void disp()
    {
        cout<<"Values are \n";
        cout<<"\n"<<f;
    }
};

int demo::a = 10;

int main()
{
    demo obj;
    //obj.disp();
    cout<<obj.a;
}
