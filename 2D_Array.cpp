
//hackerrank ques

#include<iostream>
using namespace std;

int main()
{
    int row=6,col=6;

    int arr[row][col];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum, max1 =-100;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];

            if(sum>max1)
            {
                max1=sum;
            }
        }
    }

    cout<<max1;

}
