
#include<iostream>
using namespace std;
int main()
{
    long int n,p;
    int half , no_of_turns;
    //num of pages
    cin>>n;
    //page to find
    cin>>p;
    half = n/2;
    if(half >= p)
    {
        //start from the front
        no_of_turns = p/2;

    }
    else
    {
        //start  from the back
        int temp1,temp2;
        temp1 = p/2;
        temp2 = n/2;
        //cout<<"Temp1 is"<<temp1<<endl;
        //cout<<"Temp2 is"<<temp2<<endl;
        no_of_turns = temp2 - temp1;
    }
    cout<<"number of turns is "<<no_of_turns<<endl;

}
