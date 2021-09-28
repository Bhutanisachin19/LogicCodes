
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];

    for(int a=0;a<t;a++)
    {
        string s;
        cin>>s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        int len = s.length();
        int num=0;

        if(s == rev)
            arr[a] = 0;
            //cout<<"0"<<endl;
        else
        {
            for(int i=0;i<len;i++)
            {

                if(s[i]!=rev[i])
                {
                    int n1,n2;
                    n1=int(s[i]);
                    n2 = int(rev[i]);

                    //cout<<s[i]<<" "<<rev[i]<<endl;
                    num += abs(n2-n1);
                }
            }
            //cout<<num/2<<endl;
            arr[a] = num/2;
        }
    }

    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }

}
