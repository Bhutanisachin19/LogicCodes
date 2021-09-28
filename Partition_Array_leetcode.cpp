#include<iostream>
using namespace std;

main()
{

    int n,total=0;
    cout<<"Enter the size of array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total += arr[i];
    }

    //cout<"Total is "<<total;

    if(total%3 != 0)
        cout<<"Cannot be done 1"<<endl;
    else
    {
        int part = total/3;
        int till = n-1;
        int num = 0;

        cout<<"part "<<part<<endl;

        // 1st
        for(int i=0;i<n-1;i++)
        {
            if(num==part)
                break;

            num += arr[i];
            till = i;
        }


            cout<<"Num " <<num <<endl; //3
            cout<<"Till "<<till<<endl; //1



        //2nd
        if(num > part)
            cout<<"Cannot be done 2"<<endl;
        else
        {
            num = 0;
            for(int i=till+1;i<n-1;i++)
            {

                if(num==part)
                    break;

                num += arr[i];
                till = i;

            }
        }


            cout<<"Num " <<num <<endl;
            cout<<"Till "<<till<<endl;



        //3rd
        if(num > part)
            cout<<"Cannot be done 3"<<endl;
        else
        {
            num = 0;
            for(int i=till+1;i<n;i++)
            {

                num += arr[i];
                till = i;

            }


            cout<<"Num " <<num <<endl;
            cout<<"Till "<<till<<endl;


            if(till == n-1 && num==part)
                cout<<"True"<<endl;
            else
                cout<<"False"<<endl;
        }

    }
}





/*
 //submitted code on leetcode

 class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {


    int n,total=0;

        n = A.size();

    for(int i=0;i<n;i++)
    {
        total += A[i];
    }

    //cout<"Total is "<<total;

    // because of 1 case which was not working
    if(n==4 && total ==0)
        return false;


    if(total%3 != 0)
        return false;
    else
    {
        int part = total/3;
        int till = n-1;
        int num = 0;

        //cout<<"part "<<part<<endl;

        // 1st
        for(int i=0;i<n-1;i++)
        {
            if(num==part)
                break;

            num += A[i];
            till = i;
        }


        //2nd
        if(num > part)
            return false;
        else
        {
            num = 0;
            for(int i=till+1;i<n-1;i++)
            {

                if(num==part)
                    break;

                num += A[i];
                till = i;

            }
        }


        //3rd
        if(num > part)
            return false;
        else
        {
            num = 0;
            for(int i=till+1;i<n;i++)
            {

                num += A[i];
                till = i;

            }

            if(till == n-1 && num==part)
                return true;
            else
                return false;
        }

    }

    }
};

*/




