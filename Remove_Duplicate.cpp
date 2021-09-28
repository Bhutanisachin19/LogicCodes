/*
    remove duplicate words from the string
*/


// test case -> user should be need to create what he should need


#define MAX 500
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str1;
    cout<<"Enter a string \n";
    getline(cin,str1);


    string arr[MAX];
    int leng = str1.length();
    //cout<<"LENGETH IS "<<leng;
    int index = 0;
    string temp;

    //Converting string to an array of strings
    for(int i=0;i<=leng;i++)
    {
        if(i==leng)
        {
            //cout<<temp<<endl;
            arr[index] = temp;
            temp.clear();
        }
        if(str1[i]!=' ')
        {
            temp = temp + str1[i];
        }
        else
        {
            //cout<<temp<<endl;
            arr[index] = temp;
            index++;
            temp.clear();
        }
        //cout<<str1[i]<<" ";
    }


/*
    cout<<"Array of strings is "<<endl;
    for(int i=0;i<=index;i++)
    {
        //cout<<"I is "<<i<<endl;
        cout<<arr[i]<<endl;
    }
*/



    //cout<<"Index is "<<index<<endl;

    int flag;
    string res;
    for(int i=0;i<=index;i++)
    {
        flag=0;
        for(int j=i+1;j<=index;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"duplicates are "<<arr[i]<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            res = res + arr[i] + " ";
        }
    }
    cout<<res;

}
