// It would run the same for protected

#include<iostream>
using namespace std;

class Parent
{
public:
    virtual void disp()
    {
        cout<<"This is the public disp method of Parent class "<<endl;
    }
};

class Child: public Parent
{
private:
    int secret_key;
    void disp()
    {
        cout<<"This is the private disp method of child class "<<endl;
        cout<<"The key is "<<secret_key<<endl;
    }
public:
    Child(int key)
    {
        secret_key = key;
    }
};

int main()
{
    Child child(1019);

    Parent *obj = &child;
    obj->disp();
    return 0;
}
