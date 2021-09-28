/*
Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".



Input Format

The only argument given is an array of strings A.
Output Format

Return longest common prefix of all strings in A.
For Example

Input 1:
    A = ["abcdefgh", "aefghijk", "abcefgh"]
Output 1:
    "a"
    Explanation 1:
        Longest common prefix of all the strings is "a".

Input 2:
    A = ["abab", "ab", "abcd"];
Output 2:
    "ab"
    Explanation 2:
        Longest common prefix of all the strings is "ab"

*/


// in the question string was a vector so in function i used .size in for loop insted of hardcoding it


#include<string>
#include<iostream>
using namespace std;
#define MAX 500

void longestCommonPrefix(string arr[])
{
    string temp = arr[0];
    //cout<<temp<<endl;
    string common;

    for(int i=0;i<3;i++)
    {
        //cout<<"temp is "<<temp<<endl;
        //cout<<"x is "<<arr[i]<<endl;
        string x = arr[i];
        for(int j=0;j<arr[i].length();j++)
        {
            if(temp[j]==x[j])
                common+=temp[j];
            else
                break;
        }
        //cout<<"Common is "<<common<<endl;
        temp = common;
        common.clear();
    }

    cout<<"Common Prefix  is "<<temp;
}
int main()
{
    string res;
    string arr[MAX] = {"abcdefgh", "aefghijk", "abcefgh"};
    longestCommonPrefix(arr);

}







