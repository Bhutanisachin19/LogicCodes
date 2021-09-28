#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int a_arr[25] = {0};
int b_arr[25] = {0};

int main()
{
    int n;
    string s1,s2;

    getline(cin,s1);
    getline(cin , s2);

    for(int i=0;i<s1.length();i++)
    {
        n = s1[i];
        n = n-97; // a = 97 storing a at 1st in array so 97-97 = 0 arr[0]
        a_arr[n]++;
    }


    for(int i=0;i<s2.length();i++)
    {
        n = s2[i];
        n = n-97; // a = 97 storing a at 1st in array so 97-97 = 0 arr[0]
        b_arr[n]++;
    }


    int num_of_del = 0;

    for(int i=0;i<26;i++)
    {
        int diff = abs(a_arr[i] - b_arr[i]);
        num_of_del += diff;
    }


    cout<<num_of_del;
}
