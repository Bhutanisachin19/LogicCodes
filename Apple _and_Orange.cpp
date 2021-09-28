
#include<iostream>
using namespace std;
int main()
{
    long int s,t,a,b,m,n, apples =0 , oranges =0;

    //cout<<"S and t \n";
    cin>>s>>t;

    //cout<<"a and b \n";
    cin>>a>>b;

    //cout<<"m and n";
    cin>>m>>n;

    int apple[m],orange[n];

    for(int i=0;i<m;i++)
    {
        cin>>apple[i];
    }


    for(int i=0;i<n;i++)
    {
        cin>>orange[i];
    }


    //calculating num of apples
    for(int i=0;i<m;i++)
    {
        apple[i] = a + apple[i];
        if(apple[i] >= s && apple[i] <= t)
                apples++;
    }


    //calculating num of oranges
    for(int i=0;i<n;i++)
    {
        orange[i] = b + orange[i];
        if(orange[i] <= t && orange[i] >= s)
            oranges++;
    }

    cout<<"Number of apples are "<<apples<<endl;
    cout<<"Number of oranges are "<<oranges;

    return 0;
}































