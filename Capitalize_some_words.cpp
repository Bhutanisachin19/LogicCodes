
/*
2. Given a string, say sentence=” this is crazy and fun” and a list, say name=[“is”, “fun”].
Now you need to capitalize on the first letter of every word in the given string which is not present in the list.
*/

#include<bits/stdc++.h>
#include<string>
#include<iostream>
#define MAX 500
using namespace std;


void solve(string A, string words[]) {

    //string words []= words;
    string arr[MAX];
    int leng = A.length();
    int index = 0;
    string temp;

    //Converting string to an array of strings
    for(int i=0;i<=leng;i++)
    {
        if(A[i]==' ' && A[i+1]==' ')
        {
            continue;
        }
        else
        {
            if(i==leng)
            {
                //cout<<temp<<endl;
                arr[index] = temp;
                temp.clear();
            }
            if(A[i]!=' ')
            {
                temp = temp + A[i];
            }
            else
            {
                //cout<<temp<<endl;
                arr[index] = temp;
                index++;
                temp.clear();
            }
            //cout<<A[i]<<" ";
        }
    }



    /*
    cout<<"Array is "<<endl;
    for(int i=0;i<index;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    */

    string tempp;
    int flag;

    for(int i=0;i<=index;i++)
    {
        tempp = arr[i];
        //cout<<tempp;
        flag = 0;
        for(int j=0;j<2;j++)
        {
            //cout<<words[j];
            if(tempp == words[j])
                flag++;
        }


        if(flag == 0)
        {

            tempp[0] = int(tempp[0]) - 32;
            arr[i] = tempp;

        }
    }


    for(int i=0;i<index;i++)
        cout<<arr[i]<<" ";


}

int main()
{
    string s = "this is crazy and fun ";
    string words[2] =  {"is","fun"};

    solve(s,words);
}




