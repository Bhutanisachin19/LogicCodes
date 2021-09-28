#include<iostream>
using namespace std;
#include<string>

// Complete the stringConstruction function below.
void stringConstruction(string s) {

    int arr[26] = {0}, n;


    for(int i=0;i<s.length();i++)
    {
        n = s[i];
        //cout<<n<<endl;
        n = n-97;
        arr[n]++;
    }

    int total=0;

    for(int i=0;i<26;i++)
    {

        if(arr[i] > 0)
            total++;

        //cout<<arr[i]<<endl;
    }

    cout<<total<<endl;
}

int main()
{
    string s1;
    getline(cin,s1);

    cout<<"Entered string is "<<s1<<endl;

    stringConstruction(s1);


}
