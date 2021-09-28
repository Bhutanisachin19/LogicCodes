#include<iostream>
#include<string.h>
using namespace std;

main()
{
    long n ;
    string s;

    cout<<"Enter the string"<<endl;
    getline(cin,s);

    cout<<"Enter the number"<<endl;
    cin>>n;



    string s1 = s;

    //string s2 =;

    long mod =0 ,rem =0;

    long len = s.length();

    long num = n-len;


    mod = num%len;
    rem = num/len;

    if(len == 1 && s[0] == 'a')
        cout<<n;
    else if(len == 1 && s[0] != 'a')
        cout<< "0";
    else
    {
        /*
        cout<<"Num is "<<num<<endl;
        cout<<"mod "<<mod<<endl;
        cout<<"Len "<<len<<endl;
        cout<<"rem "<<rem<<endl;
        */



        for(long i=0;i<rem;i++)
            s += s1; //concat

        string temp = "" ;

        for(long i=0;i<mod ;i++)
        {
            temp += s[i];
        }

        s += temp;

        //cout<<"Final string is "<<s<<endl;

        long counter =0;
        for(long i=0;i<s.length();i++)
        {
            if(s[i]=='a')
                counter++;
        }

        cout<<counter;

    }




}
