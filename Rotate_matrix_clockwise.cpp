// 1st tansporse and the reverse every row , to rotate clockwise

#include<algorithm>
#include<iostream>
using namespace std;

void reverse_elements(int arr[], int col)
{
    int sz = col;
    int i=0 , j = col-1;

    while(i<j)
    {
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }

}

int main()
{
    int row , col ;

    cout<<"enter the number of row "<<endl;
    cin>>row;

    cout<<"Enter the number of columns "<<endl;
    cin>>col;

    int arr[row][col];
    int transpose[row][col];

    cout<<"Enter elements of the matrix"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"matrix you entered is "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //transpose

    int temp;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }


    /*
    cout<<"matrix after transpose is "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    //reversing each row
     for(int i=0;i<row;i++)
     {
         reverse_elements(transpose[i] , col);
     }


     cout<<"Final array after rotation is "<<endl;
      for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<transpose[i][j]<<" ";
            }
            cout<<endl;
        }
}

