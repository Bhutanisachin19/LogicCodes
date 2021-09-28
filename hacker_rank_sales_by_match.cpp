#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of inputs"<<endl;
    cin>>num;

    int arr[num];

    cout<<"Enter array values"<<endl;

    for(int i=0;i<num;i++)
        cin>>arr[i];

    cout<<"Array entered is"<<endl;


    for(int i=0;i<num;i++)
        cout<<arr[i]<<" ";


    int pairs = 0 , total = 0;

    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {

            if(arr[i]>0)
            {
                if(arr[i] == arr[j])
                {
                    total++;
                    arr[i] = arr[j] = 0;
                    break;
                }
            }

        }

        if(total == 1)
            {
                pairs++;
                total=0;
            }
    }


    cout<<"Number of pairs are "<<pairs<<endl;
}
