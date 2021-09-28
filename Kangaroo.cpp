#include<iostream>
using namespace std;

int main()
{
    int x1,x2,v1,v2;
    int i;

    cin>>x1>>v1>>x2>>v2;


    if((x1 > x2) && (v1>v2))
        cout<<"No 1"<<endl;
    else if((x2 > x1) && (v2 > v1))
        cout<<"No 2"<<endl;
    else{
        for(i=0;i<20;i++)
        {
            if(( x1 + v1) == (x2 + v2))
            {
                    cout<<"Yes"<<endl;
                    break;
            }
            else
            {
                x1 += v1;
                x2 += v2;
            }
        }
    }
    cout<<"No 3"<<endl;
}
