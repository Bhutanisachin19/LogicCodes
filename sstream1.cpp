
//stringstream

#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;


    //object of string stream class
    stringstream s;

    //storing int num in string stream object
    s << num;

    string converted_s;

    //reading from string stream object
    s >> converted_s;

    cout<<"Integer "<<num<<endl;
    cout<<"String form "<<converted_s<<endl;


    // STRING TO INTEGER

    string number_s = "10";

    stringstream s2;


    //storing string in string stream object
    s2 << number_s ;

    int converted_n;

    //reading from string stream object
    s2 >> converted_n;

    cout<<"Integer "<< converted_n+9 <<endl;

    cout<<"String "<<number_s+ "9"<<endl;

}

