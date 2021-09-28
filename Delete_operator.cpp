#include<iostream>
using namespace std;

int main()
{
    int *p = new int(101);
    cout<<"value"<<*p<<endl;
    cout<<"Address "<<p<<endl;
    cout<<"Address of p "<<&p<<endl;


    delete p;
    // why is the below print statements working after deleting p
    cout<<"value"<<*p<<endl;
    cout<<"Address "<<p<<endl;
    cout<<"Address of p "<<&p<<endl;


    int y;
    //delete y; //error as delete deletes memory assigned by new

    int *p2 = &y;
    delete p2; //should have given runtime error
}
