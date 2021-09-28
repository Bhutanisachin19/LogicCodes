//calculate the nth prime number

// this code take too much execution time and does not return output for large numbers

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int flag = 0,c =0;

    for(int i=2;i<1000;i++)
    {
        flag = 0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            c++;

        if(c==n)
        {
            cout<<"The nth prime number is "<<i<<endl;
            break;
        }
    }
}


