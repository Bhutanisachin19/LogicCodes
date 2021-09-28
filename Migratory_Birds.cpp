#include<iostream>
using namespace std;

int main()
{
    int birds[5] = {0};
    int n,highest=0,index = 6;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //getting the number of birds of all types
    for(int j=0;j<n;j++)
    {
        if(arr[j]==1)
            birds[0]++;
        else if(arr[j]==2)
            birds[1]++;
        else if(arr[j]==3)
            birds[2]++;
        else if(arr[j]==4)
            birds[3]++;
        else
            birds[4]++;
    }

    // calculating highest occurance
    for(int i=0;i<5;i++)
    {
        if(highest < birds[i])
        {
            highest = birds[i];
            index = i;
        }

        if(highest == birds[i])
        {
            if(index > i)
                index = i;
        }

    }

    /*
    cout<<"Index is  "<<index<<endl;
    cout<<"Birds array is "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<birds[i]<<endl;
    }
    */


    //cout<<"Bird type is "<<endl;
    cout<<endl<<index+1<<endl;

}
