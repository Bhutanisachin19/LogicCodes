
// input n=118372 and return output 873211

#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;

    string s1,s2,s3;
    s1 = to_string(num);
    s2 = s1;
    s3 = s1;


    cout<<"Entered string is "<<s1<<endl;

    sort(s2.begin() , s2.end());
    cout<<"Ascending Order string is "<<s2<<endl;


    sort(s3.begin() , s3.end(), greater<int>());
    cout<<"Descending Order string is "<<s3<<endl;

}
