

//take a string and find all integers from that string and store them in an array

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;

    int arr[500];

    cout<<"Enter a string"<<endl;
    getline(cin,str1);

    cout<<"String you entered is "<<str1<<endl;

    string temp;
    int num, index = 0;
    for(int i=0;i<str1.length();i++)
    {
        if(isdigit(str1[i]))
        {
            temp = str1[i];
            num = stoi(temp);
            //cout<<"Num is "<<num<<endl;
            arr[index] = num;
            index++;
        }
    }


    if(index>0)
    {
        cout<<"Array of integer is "<<endl;
        for(int i=0;i<index;i++)
            cout<<arr[i]<<" ";
    }

}
