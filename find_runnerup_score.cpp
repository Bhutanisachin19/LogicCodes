#include<iostream>
using namespace std;

int main()
{
    int sec_lar= -10000, larg;
    int num;
    cout<<"Enter size of array \n";
    cin>>num;

    cout<<"Enter elements in an array \n";
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        if(i == 0)
            larg  = arr[i];

        if(arr[i] > larg)
        {
            sec_lar = larg;
            larg = arr[i];
        }
        else if(arr[i] > sec_lar && arr[i]!= larg)
            sec_lar = arr[i];


    }


    cout<<"largest number is "<<larg<<endl;
    cout<<"Second largest number is "<<sec_lar ;
}
