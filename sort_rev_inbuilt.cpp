
/*
using sort and reverse inbuilt functions
for string and array
*/

#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    string str1;

    cout<<"Enter a string"<<endl;
    getline(cin,str1);

    string rev = str1;

    reverse(rev.begin(), rev.end());

    cout<<"Reverse of string is "<<endl;
    cout<<rev<<endl;

    sort(rev.begin(), rev.end());
    cout<<"Sorted string is "<<endl;
    cout<<rev<<endl;

    //On array
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    cout<<"Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    cout<<"Reverse of array is "<<endl;
    reverse(arr, arr +n );

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" \n";

    cout<<"Sorted array in ascending order "<<endl;
    sort(arr , arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" \n";



    cout<<"Sorted array in descending order "<<endl;
    sort(arr , arr+n, greater<int>());

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" \n";


}
