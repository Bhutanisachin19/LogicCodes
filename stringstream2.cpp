// convert a string into array of string

#include<sstream>
#include <vector>
#include<iostream>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter a sentence"<<endl;
    getline(cin,s1);

    // breaking input into word using string stream
    stringstream ss(s1); // Used for breaking words



    /*
    string word; // to store individual words

    int len = s1.length();
    string arr[len];

    int i=0;
    while(ss >> word)
    {
        arr[i] = word;
        i++;
    }

    cout<<"Array of strings is "<<endl;

    for(int n=0;n<i;n++)
        cout<<arr[n]<<endl;
    */



    //using vector

    string tmp;

    vector<string> words;

    while (ss >> tmp) {
      words.push_back(tmp);
   }


   for(int i = 0; i<words.size(); i++)
      cout << words[i] << endl;


}
