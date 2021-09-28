//Nagarro ques take a int find its factorial and convert it to a string

// to_string() works in c++ version 11 and above

#include<iostream>
#include<string>
using namespace std;

string fact_as_string(long long n)
{

    long  long fact = 1;
    for(long long i=n;i>1;i--)
    {
        fact = fact * i;
    }

    cout<<"Factorial number is "<<fact<<endl;
    string s = to_string(fact);

    return s;
}

int main()
{
    long long num;
    string s;
    cout<<"Enter the number to be calculated factorial of "<<endl;
    cin>>num;
    s = fact_as_string(num);
    cout<<"Factorial string is "<<endl;
    cout<<s;
}




