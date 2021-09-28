#include<iostream>
using namespace std;

int main()
{
    int arr[4];
    int check[5] = {0};

    for(int i=0;i<4;i++)
    {
        cin>>arr[i];

        if(arr[i] == 1)
            check[0]++;

        if(arr[i] == 2)
            check[1]++;


        if(arr[i] == 3)
            check[2]++;

        if(arr[i] == 4)
            check[3]++;


        if(arr[i] == 5)
            check[4]++;
    }


    //int count1 =0 , count2 =0 ,count3 =0 , count4 = 0;

    for(int i=0;i<5;i++)
    {
        if(check[i] > 1)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[j] == i+1 && check[i] > 1)
                {
                    if(check[i+1] == 0 && i < 5)
                    {
                        arr[j] = arr[j] + 1;
                        check[i]--;
                        check[i+1]++;
                    }

                    else if(check[i-1] == 0 && i > 0)
                    {
                        arr[j] = arr[j] - 1;
                        check[i]--;
                        check[i-1]++;
                    }
                    else
                    {
                        arr[j] = arr[j];
                    }

                }
            }
        }
    }

    int distint = 0;
    //cout<<"New Array " <<endl;

/*
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<endl;
    }
*/

    int same=0;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i] == arr[j])
                same++;
        }
    }

    distint = 4 - same;
    //cout<<same ;
    cout<<distint<<endl;
}
