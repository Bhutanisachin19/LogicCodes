#include<stdio.h>
#include<stdarg.h>

//3dots is called ellipse
void sum_all(int count,...)
{
    int sum=0,i;

    va_list lst; //declaring a variable of va_list type this type is defined in stdarg.h

    va_start(lst,count); //initalizing lst with number of parameters


    for(i =0 ;i<count;i++)
    {
        int n = va_arg(lst,int); //va_arg to extract integers from the lst created , if double was passed we would have written double here
        sum += n;
    }



    //automatically shifts to the next value
    /*
    int n1 = va_arg(lst,int);
    int n2 = va_arg(lst,int);
    int n3 = va_arg(lst,int);

    printf("%d  %d  %d", n1 ,n2 ,n3);
    */


    va_end(lst); //to clean the memory assigned to lst

    printf("Sum is %d \n",sum);
}

main()
{

    sum_all(3, 3 ,19 ,5);
    sum_all(2 , 18 , 6);


    //sum_all(5,19,20,36,51,66);
}
