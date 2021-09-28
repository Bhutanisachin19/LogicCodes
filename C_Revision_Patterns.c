
#include<stdio.h>

//pattern 1
/*
main()
{
    int i,j,num=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
}
*/


//pattern 2
/*
main()
{
    int row,column;

    for(row=1;row<5;row++)
    {
        for(column=1;column<=row;column++)
        {
            printf("%d", column);
        }
        printf("\n");
    }
}
*/

//pattern 3
/*
main()
{
    int i,j,num=65;

    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",num);
            num++;
        }
        num = 65;
        printf("\n");
    }
}
*/

//pattern 4
/*
main()
{
    int i,j,a=10;

    for(i = 0 ;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ", a);
            a--;
        }
        printf("\n");
    }

}
*/


//pattern 5
/*
main()
{
    int i,j,num=4;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
        }
        printf("\n");
        num--;
    }
}
*/


//pattern 6

main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
















