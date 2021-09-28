//are static members inherited

#include<iostream>
using namespace std;

class One
{
public:
    int a;
    static int s;

    void disp()
    {
        cout<<"Hello from non static method \n ";
        //cout<<s<<"\n";
    }

    static void disp2()
    {
        cout<<"Hello from  static method \n ";
    }
};

class two:public One
{
public:
    void dispp()
    {
        cout<<"Hello from child";
    }
};

int One::s = 16;
int main()
{
    One obj;
   // obj.disp();

    //One::disp2();

    two ob;
    //ob.disp2();

    cout<<ob.s; //error
}
