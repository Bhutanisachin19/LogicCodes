#include<iostream>
#include<cmath>
using namespace std;

int sub(int arr[3][3], int arr2[3][3])
{
    int i,j, result = 0;
    for(i =0 ;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result += abs(arr[i][j] - arr2[i][j]);
        }
    }

    return result;
}

int main()
{
    int ms0[3][3]= { { 8, 1, 6 }, { 3, 5, 7 }, { 4, 9, 2 } };
    int ms1[3][3]=  { { 6, 1, 8 }, { 7, 5, 3 }, { 2, 9, 4 } };
    int ms2[3][3] =  { { 4, 9, 2 }, { 3, 5, 7 }, { 8, 1, 6 } };
    int ms3[3][3] =   { { 2, 9, 4 }, { 7, 5, 3 }, { 6, 1, 8 } };
    int ms4[3][3] =  { { 8, 3, 4 }, { 1, 5, 9 }, { 6, 7, 2 } };
    int ms5[3][3]  =  { { 4, 3, 8 }, { 9, 5, 1 }, { 2, 7, 6 } };
    int ms6[3][3]  =  { { 6, 7, 2 }, { 1, 5, 9 }, { 8, 3, 4 } };
    int ms7[3][3] =  { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } };


    int input_array[3][3],i,j;

    //taking input
    for(i =0 ;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>input_array[i][j];
        }
    }

    int res[8];

    res[0] = sub(ms0,input_array);
    res[1] = sub(ms1,input_array);
    res[2] = sub(ms2,input_array);
    res[3] = sub(ms3,input_array);
    res[4] = sub(ms4,input_array);
    res[5] = sub(ms5,input_array);
    res[6] = sub(ms6,input_array);
    res[7] = sub(ms7,input_array);



    int minn =  res[0];
    for( i=0;i<8;i++)
    {
        if (res[i] < minn)
            minn = res[i];
    }

    cout<<minn;


}
