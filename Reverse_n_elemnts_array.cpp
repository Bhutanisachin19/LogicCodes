#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter array "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Array is "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    int rev;
    cout<<"Enter the number of elements to be reversed "<<endl;
    cin>>rev;

    reverse(arr , arr+rev);

    cout<<"New Array is"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
