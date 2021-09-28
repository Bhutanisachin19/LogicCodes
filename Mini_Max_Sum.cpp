//Hacker Rank

#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int arr[5];
    long long int min_sum = 0,max_sum =0,temp=0;

    //taking array as input
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    //calculating min max
    for(int i=0;i<5;i++)
    {
        //cout<<"For "<<arr[i]<<endl;
        for(int j=0;j<5;j++)
        {
            if(j == i)
                continue;
            else
            {
                temp += arr[j];
                //cout<<arr[j];
                //cout<<"temp is "<<temp<<endl;
            }
        }

        if(min_sum == 0 && max_sum == 0)
        {
            min_sum = max_sum = temp;
        }
        else{
                //temp = abs(temp);
                //cout<<"temp is "<<temp<<endl;
            if(max_sum < temp)
              max_sum = temp;

            //cout<<"temp is "<<temp<<endl;
            if(min_sum > temp)
                min_sum = temp;
        }

        temp = 0;

    }

    cout<<"Min sum is "<<min_sum<<" and max sum is"<<max_sum;
    return 0;

}
