/*
Method 2 ( Use Dynamic Programming )
We can avoid the repeated work done is method 1 by storing the Fibonacci numbers calculated so far.
*/


#include<iostream>
using namespace std;

int main()
{
    long long n;
    cout<<"Enter a number "<<endl;
    cin>>n;

    long long f[n + 2];
    f[0] = 0;
    f[1] = 1;


    for(long long i=2;i<=n;i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }


    //whole series
    /*
    for(long long i=0;i<=n;i++)
        cout<<f[i]<<" ";
    */


    cout<<endl;

    long long num = f[n];
    cout<<num;
}
