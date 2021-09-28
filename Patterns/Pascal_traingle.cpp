#include<iostream>
using namespace std;
int main()
{
    int row,col,space,n,num;

    cout<<"Enter the number of rows "<<endl;
    cin>>num;

    for(row=0;row<num;row++)
    {

        for(space=0;space<(num-row);space++)
        {
            cout<<" ";
            //cout<<"_";
        }

        n=1;
        for(col=0;col<=row;col++)
        {
            cout<<" "<<n;
            //cout<<n<<"="<<n<<"*"<<"("<<row<<"-"<<col<<")"<<"/"<<"("<<col<<"+"<<"1"<<endl;
            n=n*(row-col)/(col+1);
        }
        cout<<"\n";
    }

}


