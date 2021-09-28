
#include<iostream>
#include <cstdlib>
using namespace std;

main()
{
    int i,j,len,prim=0,sec=0, result;

    //cout<<"Enter the length of array";
    cin>>len;

    int arr[len][len];

    //taking array as input
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            cin>>arr[i][j];
        }
    }


    //displaying array
    /*
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */


    //calculating  difference
    for(i=0,j=len-1;i<len;i++,j--)
    {
        prim += arr[i][i];
        sec += arr[i][j];
    }

    //cout<<prim<<" " <<sec;

    result = prim-sec;
    result = abs(result);
    cout<<result;

}

