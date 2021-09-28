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

/*
    for(int i=0;i<index;i++)
        cout<<arr[i]<<endl;
*/

int num;
    for(int i=0;i<index;i++)
    {
        num=1;
        if(arr[i]== " ")
            continue;
        else
        {
            for(int j=i+1;j<index;j++)
            {
                    if(arr[i]==arr[j])
                    {
                        num++;
                        arr[j] = " ";

                    }
            }
            cout<<arr[i]<<" = "<<num<<endl;
        }
    }

}

int main()
{
    string s = "what do you do kid";
    //string s = "hello son what the fuck is this son hello hello ";
    solve(s);
}


