#include<iostream>
using namespace std;

int main()
{
    int result[1000],num,countt,p,i;

    result[0] = 1;
    countt = 0;

    cout<<"Enter a number "<<endl;
    cin>>num;

    for( ;num>=2;num--)
    {
        p=0;
        for(i=0;i<=countt;i++)
        {
            p = (result[i]*num) + p;
            result[i] = p%10;
            p=p/10;
        }
        while(p>0)
        {
            result[++countt] = p%10;
            p=p/10;
        }
    }

    for(i=countt;i>=0;i--)
    {
        cout<<result[i];
    }

    return 0;

}
