// find the sum of all numbers in a string which are divisible by 2

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;

    cout<<"Enter a string"<<endl;
    getline(cin,str1);

    cout<<"String you entered is "<<str1<<endl;

    string temp;
    int num,total = 0, index = 0;
    for(int i=0;i<str1.length();i++)
    {
        if(isdigit(str1[i]))
        {
            temp = str1[i];
            num = stoi(temp);
            //cout<<"Num is "<<num<<endl;

            if(num%2==0)
            {
                total += num;
            }
        }
    }

    cout<<"Total is "<<total<<endl;
}
