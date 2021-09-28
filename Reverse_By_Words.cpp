
//        fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq

#define MAX 500
#include<string>
#include<iostream>

using namespace std;

void solve(string A) {

    string arr[MAX];
    int leng = A.length();
    int index = 0;
    string temp;

    //Converting string to an array of strings
    for(int i=0;i<=leng;i++)
    {
        if(A[i]==' ' && A[i+1]==' ')
        {
            continue;
        }
        else
        {
            if(i==leng)
            {
                //cout<<temp<<endl;
                arr[index] = temp;
                temp.clear();
            }
            if(A[i]!=' ')
            {
                temp = temp + A[i];
            }
            else
            {
                //cout<<temp<<endl;
                arr[index] = temp;
                index++;
                temp.clear();
            }
            //cout<<A[i]<<" ";
        }
    }


    string res;
    for(int j=index;j>=0;j--)
    {
        //cout<<arr[j]<<endl;
        res+= arr[j] ;

        if(j==0)
            break;
        else
        {
            res += " ";
        }
    }


    //cout<<"String is "<<endl<<res<<endl; // includes spaces at 1st and last
    string final_res;

    if(res[0]== ' ')
        {
            //to remove spaces in front and end of the above (1st line comment) input
            for(int i=1;i<res.length() -1 ;i++)
            {
                final_res += res[i];
            }
            cout<<final_res;
        }
    else
        cout<<res;

}

int main()
{
    string s;
    getline(cin,s);
    solve(s);
}








