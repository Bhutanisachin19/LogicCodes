
// ques in unthinkable coding round

#include<iostream>
using namespace std;

void printPrime(int n)
{
        //print prime numbers till n

        int flag;
        //for(int i=1;i<=n;i++)
        int i=1;
        while(i<=n)
        {
            if(i==1)
            {
                cout<<i<<" ";
                i++;
            }
            else
            {
                flag = 1;
                for(int j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        flag =0;
                        break;
                    }
                }
                if(flag==1)
                {
                    cout<<i<<" ";
                    i++;
                }
                else
                {
                    i++;
                    n++;
                }
            }
        }
}

int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;

    cout<<"The Pattern is"<<endl;
    for(int i=1;i<=n;i++)
    {
        printPrime(i);
        cout<<endl;
    }
}
