
#include<iostream>
using namespace std;

int main()
{
    int m,n,largest;
    cin>>n;//size of array a
    cin>>m; //size of array b
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[m];

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        largest = b[0];
    }



    int div_no[100] = {0} , index=0, num = 0;

    for(int i=1;i<=largest;i++)
    {
        num = 0;
        for(int j=0;j<n;j++)
        {
            if(i%a[j]==0)
            {
                num++;
            }

            if(num == n)
            {
                div_no[index] = i;
                index++;
            }
        }
    }


    int counts = 0;

    for(int i=0;i<100;i++)
    {
        num = 0;
        if(div_no[i]==0)
            break;
        else{
          for(int j=0;j<m;j++)
          {
               if( b[j]%div_no[i] ==0)
                {
                    num++;
                }

            if(num == m)
              counts++;

          }
        }
        //cout<<div_no[i]<<endl;
    }

    cout<<counts<<endl;
    return 0;

}
