// pangram contains every letter of the alphabet.
#include<iostream>
#include<string>
using namespace std;
int arr[25] = {0};
int main()
{
    string s;
    //cout<<"Enter a string"<<endl;
    getline(cin,s);
    int len = s.length();
    int n;
    for(int i=0;i<len;i++)
    {
            if(s[i]==' ')
                continue;
            else
            {
                n = tolower(s[i]);
                //cout<<"N "<<n<<endl;
                n = n-97; // a = 97 storing a at 1st in array so 97-97 = 0 arr[0]
                //cout<<"INT"<<n<<endl;
                arr[n]++;
            }
    }
    int flag =0;
    //cout<<"ARRAY IS"<<endl;
    for(int i=0;i<25;i++)
    {
        //cout<<arr[i]<<" ";
        if(arr[i]==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
}
