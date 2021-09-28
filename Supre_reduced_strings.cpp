//using stack

// if 2 same alphabets remove both
/*

 input aaabccddd
 output abd
*/

#include<iostream>
#include<stdio.h>
#define MAX 500
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

    char str1[100];
    scanf("%[^\n]%*c",str1);

    int len = strlen(str1);

    for(int i=0;i<len;i++)
    {
        if(top==-1)
            push_(str1[i]);
        else
        {
            char temp;
            if(str1[i]==stack_arr[top])
            {
                temp = pop_();
                cout<<"POPPED "<<temp<<endl;
            }
            else
                push_(str1[i]);
        }
    }
    char res[MAX];
    if(top==-1)
        cout<<"Empty String"<<endl;
    else
    {
        //printing stack
        for(int i=0;i<=top;i++)
        {
            cout<<stack_arr[i];
        }
    }
}
