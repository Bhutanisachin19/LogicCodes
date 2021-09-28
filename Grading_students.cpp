//hacker rank


#include<iostream>
using namespace std;
int main()
{
    int n;

    //size of array
    cin>>n;

    int marks[n];

    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }


    for(int i=0;i<n;i++)
    {
        if(marks[i] < 38)
            marks[i] = marks[i]; //no change
        else if( (marks[i] > 38) && (marks[i] < 40) )
            marks[i] = 40;
        else
        {
            for(int j=8;j<=20;j++)
            {
                int range = 5 * j;
                if((range-marks[i] < 3) && (range-marks[i] > 0))
                {
                    marks[i] = range;
                    break;
                }

            }
        }

    }


    cout<<"OUTPUT"<<endl;
    // output
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<endl;
    }
}
