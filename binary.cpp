#include<iostream>
using namespace std;

class BINARY
{
public:
    int coun = 0;
    //int arr[];

    int binary_searchh(int arr[],int s,int key)
    {
        int mid,ending;
        int start = 0;
        ending = s - 1;


        while(start <= ending)
        {
            coun++;
            mid = (start + ending)/2;
            mid = int(mid);

            if(arr[mid] == key)
				return mid;

			if(arr[mid] > key)
				ending = mid-1;
			else
				start = mid+1;
        }
        return -1;
    }
};

int main()
{
    int arr[] = {2,4,6,8,9,10,15,16,17,19,22,25,26,29,30};
    int ans;
    BINARY obj;
    ans = obj.binary_searchh(arr,15,30);
    cout<<ans<<endl;

    //cout<<obj.coun;
}
