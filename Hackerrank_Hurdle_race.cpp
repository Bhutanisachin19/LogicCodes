
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter size of array"<<endl;
    cin>>num;

    int k;
    cout<<"Enter value of k"<<endl;
    cin>>k;

    int arr[num], largest=0;

    cout<<"Enter elements of array"<<endl;

    for(int i=0;i<num;i++)
    {
        cin>>arr[i];

        if(arr[i] > largest)
            largest=arr[i];
    }

    int dose = largest - k;

    if(dose > 0)
        cout<<dose<<endl;
    else
        cout<<"0";

}
