
//sort the given word in alphabetical order


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str1;

    cout<<"Enter a word"<<endl;
    //getline(cin,str1);
    cin>>str1; //because input is a word


    cout<<"Word you entered is "<<str1<<endl;

    sort(str1.begin() , str1.end());


    cout<<"Sorted word is "<<str1<<endl;


}
