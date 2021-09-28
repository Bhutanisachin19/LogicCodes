#include <bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

void isPalindrome(string A) {

    string b ;

    int len = A.length();


    for(int i=0;i<len;i++)
    {
        if(A[i]!=' ' && (A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122) || (A[i]>=48 && A[i]<=57) )
        {
            b += tolower(A[i]);
        }
    }

    string rev = b;

    reverse(rev.begin(), rev.end());

    /*
    cout<<"b is "<<endl;
    cout<<b<<endl;
    cout<<"Rev is "<<endl;
    cout<<rev<<endl;

    cout<<"length of b is "<<b.length()<<endl;
    cout<<"length of rev is "<<rev.length()<<endl;
    */

    int rev_len = b.length();
    int flag = 1;
    int demo = 0;

    for(int i=0;i<rev_len;i++)
    {
        if(b[i]!=rev[i])
        {
            flag = 0;
            /*
            demo++;
            cout<<"CASE"<<endl;
            cout<<"B"<<b[i]<<endl;
            cout<<"rev"<<rev[i]<<endl;
            cout<<"i"<<i<<endl;
            */
            break;
        }

    }

    //cout<<"demo is "<<demo<<endl;

    if(flag==1)
        cout<<"String is PALINDROME"<<endl;
    else
        cout<<"NOT PALINDROME"<<endl;


}

int main()
{
    string str1;

    cout<<"Enter a string to be checked "<<endl;
    getline(cin,str1);

    isPalindrome(str1);
}
