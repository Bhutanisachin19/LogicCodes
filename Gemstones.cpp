/*
For example, the array of mineral composition strings arr= [abc,bc,abc]. The minerals c and b appear in each composite, so there are 2 gemstones.
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //array of strings
    string arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];



    string temp = arr[0],temp2;
    int flag;

    for(int i=1;i<n;i++)
    {
        string s = arr[i];
        for(int j=0;j<s.length();j++)
        {
            flag = 0;
            for(int k=0;k<temp.length();k++)
            {
                if(s[j]==temp[k])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
                temp2 += s[j];

        }
        temp = temp2;
        temp2.clear();
    }

    //cout<<temp; //some chars are repeated

    string ans;
    for(int i=0;i<temp.length();i++)
    {
        flag = 0;
        for(int j=i+1;j<temp.length();j++)
        {
            if(temp[i]==temp[j])
               flag = 1;
        }

        if(flag ==0)
            ans += temp[i];
    }

    //cout<<ans;
    cout<<ans.length();

}
