//hacker rank ques

#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    string s1,s2;
    //cout << "Enter a string: ";
    getline(cin,s1);

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==' ')
            continue;
        else
            s2 += s1[i];
    }

    //cout<<s2;

    int len = s2.length(); //length of string without spaces
    double root = sqrt(len);

    int row = floor(root);
    int col = ceil(root);


    cout<<"Length i "<<len<<endl;
    cout<<"Rows ie floor value is "<<row<<endl;
    cout<<"column ie ceil value is "<<col<<endl;


    if(len <= row*col)
    {
        //2d array
        char arr[row][col];

        int i=0;
            for(int r=0;r<row;r++)
            {
                for(int c=0;c<col;c++)
                {
                    arr[r][c] = s2[i];
                    i++;
                }
            }

        //printing array


        cout<<"Array is "<<endl;
            for(int r=0;r<row;r++)
            {
                for(int c=0;c<col;c++)
                {
                    cout<<arr[r][c];
                }
                cout<<endl;
            }



           // cout<<"Final output "<<endl;
            for(int i=0;i<col;i++)
            {
                for(int j=0;j<row;j++)
                {
                    if(arr[j][i]=='\0')
                        continue;
                    else
                    cout<<arr[j][i];
                }
                cout<<" ";
            }

    }
    else
    {
        //2d array
        char arr[col][col];
        int i=0;
            for(int r=0;r<col;r++)
            {
                for(int c=0;c<col;c++)
                {
                    arr[r][c] = s2[i];
                    i++;
                }
            }


    //printing array
    /*
    cout<<"Array is "<<endl;
        for(int r=0;r<col;r++)
        {
            for(int c=0;c<col;c++)
            {
                cout<<arr[r][c];
            }
            cout<<endl;
        }
        */


        //cout<<"Final output "<<endl;
        for(int i=0;i<col;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(arr[j][i]=='\0')
                    continue;
                else
                cout<<arr[j][i];
            }
            cout<<" ";
        }
    }
}















