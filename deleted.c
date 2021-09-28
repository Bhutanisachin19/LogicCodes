#include<stdio.h>
#include<stdarg.h>

//3dots is called ellipse
void sum_all(int count,...)
{
    //int sum=0,i;

    char a;
    int i;

    va_list lst; //declaring a variable of va_list type this type is defined in stdarg.h

    va_start(lst,count); //initalizing lst with number of parameters

     a = va_arg(lst,char);
    printf("%c \n",a);
     a = va_arg(lst,char);
    printf("%c \n",a);
    va_end(lst); //to clean the memory assigned to lst

    //printf("Sum is %d \n",sum);


}

main()
{
    sum_all(3,'A','a','b','c');
    //sum_all(2 , 18 , 6);
}
