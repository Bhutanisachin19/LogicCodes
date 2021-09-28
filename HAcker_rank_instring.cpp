#include <bits/stdc++.h>
#include<string>

using namespace std;

// Complete the hackerrankInString function below.
void hackerrankInString(string s) {

    string hr = "hackerrank";

    int flag, num=0;
    int n=0;
    for(int i=0;i<hr.length();i++)
    {
        flag = 0;
        for(int j=0;j<s.length();j++)
        {
            if(hr[i] == s[j] && j>=n)
            {
                flag = 1;
                n = j+1;
                break;
            }
        }

        if(flag==1)
            num++;
    }

    if(num==hr.length())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}

int main()
{


    int q;
    cin >> q;

    string str[q];
    for(int i=0;i<q;i++)
    {
        cin>>str[i];
    }

    for(int i=0;i<q;i++)
    {
        hackerrankInString(str[i]);
    }


    /*
    string s;
    getline(cin,s);

    hackerrankInString(s);

    */

    return 0;
}
