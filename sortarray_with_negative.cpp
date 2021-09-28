/*


Ex. A = {-8,-5,-3,-1,3,6,9}
Output: {-1,-3,3,-5,6,-8,9}


*/

#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;


    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    //sorting
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]) > abs(arr[j]))
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                //cout<<abs(arr[i])<<" "<<abs(arr[j])<<endl;
            }
        }
    }


    cout<<"Array after sorting is "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
