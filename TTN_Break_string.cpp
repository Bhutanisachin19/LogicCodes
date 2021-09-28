// take a number n as input and break the string into substrings example abcdefgh ,
// n = 3 substrings = abc def gh
// the function should return the reversed output of each substring





#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    string str1;

    cout<<"Enter a string"<<endl;
    getline(cin,str1);

    cout<<"Enter a number "<<endl;
    cin>>num;


    cout<<"String you entered is "<<str1<<endl;


    int temp_num =0,index=0 , arr_index=0;

    string result[20] , temp;
    for(int i=0;i<str1.length();i++)
    {
        if(temp_num < num)
        {
            temp += str1[i];
            temp_num++;
        }


        if(temp_num==num || i==str1.length()-1 )
        {
            temp_num = 0;
            reverse(temp.begin() , temp.end());
            result[index] = temp;
            index++;
            temp.clear();
            arr_index++;
        }
    }

    for(int i=0;i<arr_index;i++)
        cout<<result[i]<<"  ";

}
