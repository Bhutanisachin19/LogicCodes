
//list all unique words in a string

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string str1;

    cout<<"Enter a String"<<endl;
    getline(cin,str1);

    cout<<"String you entered is "<<str1<<endl;

    stringstream ss1(str1);
    string word;
    int len = str1.length();
    string arr[len];

    int i=0;

    while(ss1 >> word)
    {
        arr[i] = word;
        i++;
    }

    cout<<"Array of string is"<<endl;
    for(int n=0;n<=i;n++)
        cout<<arr[n]<<endl;


    string result[len];

    int flag = 0, index=0;
    for(int j=0;j<=i;j++)
    {
        flag =0;
        for(int z=j+1;z<=i;z++)
        {
            if(arr[j] == arr[z])
            {
                flag = 1;
                arr[z] = " ";
                break;
            }
        }

        if(flag==0 && arr[j]!=" ")
        {
            result[index] = arr[j];
            index++;
        }
    }


    cout<<"Final result is "<<endl;
    for(int b=0;b<index;b++)
        cout<<result[b]<<" ";

    cout<<"hello";

}




