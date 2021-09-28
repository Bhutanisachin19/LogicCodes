
//using stack

#include<iostream>
#include<stdio.h>
#define MAX 35000
#include<string.h>
using namespace std;


//stack using array
char stack_arr[MAX];
int top;

void push_(char a)
{

    if(top== MAX-1)
    {
        cout<<"STACK FULL"<<endl;
    }
    else
    {
        top++;
    }

    stack_arr[top] = a;
}

char  pop_()
{
    char a;
    if(top==-1)
        cout<<"Empty stack "<<endl;
    else
    {
        a = stack_arr[top];
        top--;
    }
    return a;
}


int main()
{
    top = -1;
    int num;
    cin>>num;

    string arr[MAX];

    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }


    int len;
    char temp_char;
    int countt;

    int res_arr[num];
    string temp;

    for(int i=0;i<num;i++)
    {
        countt=0;
        top=-1;
        temp = arr[i];
        len = temp.length();

        for(int i=0;i<len;i++)
        {
            push_(temp[i]);

            if(stack_arr[top]==stack_arr[top-1])
            {
                temp_char = pop_();
                countt++;
            }
        }
        res_arr[i] = countt;
        stack_arr[MAX] = ' ';

    }


    for(int j=0;j<num;j++)
    {
        cout<<res_arr[j]<<endl;
    }

}
