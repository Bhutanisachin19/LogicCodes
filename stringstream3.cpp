
// string pre defined functions

// 1st isdigit()

/*
#include<iostream>
#include<string>
using namespace std

int main()
{
    string s1;
    cout<<"Enter a string "<<endl;
    getline(cin,s1);

    int len;
    for(int i=0;i<len;i++)
    {
        if(isdigit(s1[i]))
            cout<<s1[i]<<" ";
    }
}
*/


//2nd isspace()
/*
The isspace() function returns non zero value if ch is a whitespace character, otherwise returns zero.
*/


//append
/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter a string "<<endl;
    getline(cin,s1);



    string s2;
    cout<<"Enter another string "<<endl;
    getline(cin,s2);


    cout<<"After append"<<endl;
    s1.append( s2); // pass with space so the string has space after append

    cout<<s1;

}
*/



//find -> searches for the 1st position

/*
More like this are
    find_first_of
    find_last_of
    find_first_not_of
    find_last_not_of


*/


/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter a string "<<endl;
    getline(cin,s1);

    string s2;
    cout<<"Enter a string to find"<<endl;
    getline(cin,s2);

    int pos = s1.find(s2);
    cout<<pos;

}
*/



/*

// string::find_first_not_of
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t

int main ()
{
  std::string str ("look for non-alphabetic characters...");

  std::size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");

  if (found!=std::string::npos)
  {
    std::cout << "The first non-alphabetic character is " << str[found];
    std::cout << " at position " << found << '\n';
  }

  return 0;
}
*/



/*
// string::find_last_not_of
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t

int main ()
{
  std::string str ("Please, erase trailing white-spaces   \n");
  std::string whitespaces (" \t\f\v\n\r");

  std::size_t found = str.find_last_not_of(whitespaces);
  if (found!=std::string::npos)
    str.erase(found+1);
  else
    str.clear();            // str is all whitespace

  std::cout << '[' << str << "]\n";

  return 0;
}
*/



//stoi , stof etc

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter a string "<<endl;
    getline(cin,s1);

    int pos = stoi(s1);
    cout<<"Interger "<<pos<<endl;


    float pos_f = stof(s1);
    cout<<"Float "<<pos_f<<endl;

}











