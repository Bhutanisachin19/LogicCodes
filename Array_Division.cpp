#include<iostream>
using namespace std;

int main()
{
    int s;
    cin>>s;

    int arr[s];

    for(int i=0;i<s;i++)
        cin>>arr[i];


    int sum =0, sum2=0;

    fro(int i=0;i<s;i++)
    {
        sum = arr[i] + arr[i+1];
    }
}
