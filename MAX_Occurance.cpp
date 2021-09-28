

#include<iostream>
#include<string>
using namespace std;
int arr[25] = {0};
int main()
{
    string s;
    cout<<"Enter a string"<<endl;
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


    int occurance = arr[0];
    //cout<<"ARRAY IS"<<endl;
    for(int i=0;i<25;i++)
    {
        //cout<<arr[i]<<" ";

        if(arr[i] > occurance)
            occurance = arr[i];
    }

    //cout<<occurance<<endl;

    //if 2 or more has the same occurance i.e highest return 0

    int flag = 0;
    for(int i=0;i<25;i++)
    {
        //cout<<arr[i]<<" ";

        if(arr[i] == occurance)
            flag++;
    }

    if(flag > 1)
        cout<<"0"<<endl;
    else
        cout<<occurance<<endl;

}
