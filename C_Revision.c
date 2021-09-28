


/*
#include<stdio.h>
main()
{
    int num;
    printf("Enter a number ");
    scanf("%d" , &num);

    //we can use wrong specifier in printf eg taking an int input and priting using %c it will typecaste it only sometimes like in char and int
    //but doing same with scanf eg taking int and writing scanf("%c") will result in undefined behaviour


    printf("Number is %f" , num);
    printf("\n");

    //printf("The address is %u" ,&num);

}
*/


/*

//Pointers
#include<stdio.h>
main()
{
  int a = 10;

  int *p;

  p = &a;

  printf("Address of a is %d " ,p);
  printf("\n");
  printf("Value of a is %d using pointer" ,*p);
  printf("\n");
  printf("Value of a is %d " ,a);



  printf("Value of a is %d", a);
  printf("\n");
  printf("Address of a is %d" ,&a);
  printf("\n");



  p = &a; //passing address in p
  printf("Address using pointer %d",p);
  printf("\n");

  p = a; // value of a
  printf("Value of pointer p is %d",p);
  printf("\n");


  printf("Address OF pointer is %d",&p);
  printf("\n");
}

*/



//NULL pointer
/*
#include<stdio.h>
main()
{
    int *ptr = NULL ;

    printf("Value at ptr is %x ", ptr); //0 as NULL pointer gives 0

}
*/



//const Pointer

/*
#include<stdio.h>
main()
{
    int a = 1019;
    int b = 1;
    int *const ptr;

    ptr = &a;
    ptr = &b; //Error because its a const pointer

    printf("value of pointer is %d ", *ptr);
}
*/


// pointer to a const

/*
#include<stdio.h>
main()
{
    int a = 1019;
    int b = 1;
    const int *ptr;

    ptr = &a;
    printf("value of pointer is %d ", *ptr);

    *ptr = 20; // error because it is a pointer to a constant
}
*/

// const pointer to a const

/*
#include<stdio.h>
main()
{
    int a = 1019;
    int b = 1;
    const int* const ptr = &a;

    *ptr = 222; //error
    ptr = &b; //error

    printf("value of pointer is %d ", *ptr);
}

*/



//preprocessor directive

/*
#define FIRST 1
main()
{
    printf("value of directive is %d \n",FIRST);

    #ifdef FIRST
    printf("Hai bhai \n");
    #else
    printf("nahi hai betichod");
    #endif // FIRST

}
*/


/*
//#define CHECK 100
main()
{
    int a = 10;
    //works only with macros
    #if (a > 5)
    printf("Greater than 5");
    #else
    printf("Less Than 5");
    #endif
}
*/


/*
#include<stdio.h>
main()
{
    int *ptr = NULL;

    printf("Value of uninitalized pointer is %d ", ptr);
}

*/



/*
#include<stdio.h>
main()
{
    int arr[5];
    int i;

    for(i =0 ;i< 5 ;i++)
    {
        printf("Enter Element \n");
        scanf("%d",&arr[i]);
    }

    printf("Array is \n");


    for(i =0 ;i< 5 ;i++)
    {
        printf("%d \n", arr[i]);
    }

}
*/



//call by value and call by reference

/*
#include<stdio.h>
void Val(int a , int b)
{
    a = a +10;
    b = b +10;
}

void Ref (int *a , int *b)
{
    *a = *a + 10;
    *b = *b +10;
}

main()
{
    int a = 1 , b = 9;
    printf("values are %d  %d \n", a , b);

    Val(a , b); //call by value
    printf("values after calling val are %d  %d \n", a , b);

    Ref(&a , &b); //call by refernece
    printf("values after calling ref are %d  %d ", a , b);

}
*/





//Returning More than one value

/*

#include<stdio.h>
void return_two(int a, int b , int *sum , int *diff); //prototype of fncn
main()
{
    int a=10 , b =30, sum ,diff;

    return_two(a , b , &sum , & diff);
    printf("Sum is %d " , sum);
    printf("\n");
    printf("Difference is %d " , diff);
}

void return_two(int a ,int b , int *sum , int *diff)
{
    *sum = a + b;
    *diff = b - a;
}


*/


//C Test Your Skills book questions

/*
#include<stdio.h>
main()
{
    extern int fun(float f);
    int a;
    float b = 12.5;
    a = fun(b);
    printf("%d", a);

}

int fun(float b)
{
    return ((int)b);
}


*/

/*

#include<stdio.h>

main()
{

    extern int a ;
    //a = 10;
    printf("%d" , a);

}

int a = 1019;

*/


/*
#include<stdio.h>
main()
{
    int i=-3,j=2,k=0,m;
    //m= ++i && ++j || ++k;
    //printf("%d %d %d %d" , i , j,k,m);

    m = -2 && 3; // true hence 1
    printf("%d" , m);
}
*/


//switch
/*

#include<stdio.h>
main()
{
    char c = 'B';

    switch(c)
    {
    case 'A':
        printf(" A ");break;

    case 'B':
        printf("B");break;
    case 'C':
        printf("C");break;
     default:
        printf("WTF BRo");
    }
}

*/




//Test your C skills ch-5

/*
#include<stdio.h>
main()
{
    int a,b;
    a = sumdig(123);
    b = sumdig(123);
    printf("%d %d ", a,b);

}

sumdig(int n)
{
    static int s = 0;
    int d;

    if(n!=0)
    {
        d = n%10;
        n =(n-d)/10;
        s = s+d;
        sumdig(n);
    }
    else
        return(s);
}


*/


//chapter 6

/*
#include<stdio.h>
#define CUBE(x) (x*x*x)
main()
{
  int a , b=3;
  a = CUBE(b++);
  printf("%d %d",a,b);

}
*/

/*
#include<stdio.h>
#define INFINITELOOP while(1) //can be in small letters
main()
{
    INFINITELOOP
    printf("Hello");
}
*/

/*
#include<stdio.h>
#define PRINT(val) printf( #val " = %d ",val)
main()
{
    int a=10 , b=19;
    PRINT(a);
    PRINT(b);
}

*/

/*
#include<stdio.h>
main()
{
    char *c;
    int  *i;
    float *f;

    printf("%d \n",sizeof(c));
     printf("%d \n",sizeof(i));
      printf("%d \n",sizeof(f));
}*/



/*
#include<stdio.h>
main()
{
    printf("%d %d %d", sizeof('3'), sizeof("3"),sizeof(3));
}
*/




/*

#include<stdio.h>
main()
{
    char *str[] = {"Frogs", "Do" , "Not","Die","they","croak"};
    printf("%d %d ", sizeof(str),sizeof(str[0]));
    printf("%s",str[0]);

}

*/






/* printf example */
/*
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}

*/




/*

#include<stdio.h>
main()
{
    int n =5;
    printf("n=%*d \n",n,n);

    printf("%5d",3);
}
*/


/*

#include<stdio.h>
main()
{
    float a = 3.15529;
    printf("%5.4f",a);
}

*/

/*

#include<stdio.h>
main()
{
    int a= 0, b=19 ,c;

    c = a && b;
    printf("%d ",c);


    c = a || b;
    printf("%d ",c);
}

*/



/*
#include<stdio.h>
main()
{
    float n=1.9890778;
    printf("%6.2f \n",n);
    printf("123456");

}
*/


//Bitwise Operator

/*
#include<stdio.h>
main()
{
    int a=10,b=15,c;
    c = a&b;
    printf("%d",c);
}
*/



/*
//const
#include<stdio.h>
main()
{
     int a =5;
     int arr[a];

     for(int i=0;i<5;i++)
     {
         scanf("%d",arr[i]);
     }

    printf("%d",a);
}
*/




/*
#include<stdio.h>
main()
{
    const char *fun();
    char *ptr =fun();
}

const char *fun()
{
    return "Hello";
}
*/


//pointer

/*
#include<stdio.h>
main()
{
    float *f;
    char a = 'A';

    f = &a;//gives warning
    printf("%u",f);
}
*/




//Chapter 17


//dynamically creatig 1d array
/*
#include<stdio.h>
#include<stdlib.h>
main()
{
    int i;
    int *p = (int *)malloc(5 * sizeof(int));

    for(i=0;i<5;i++)
    {
        printf("%d \n",p[i]);
    }
}
*/


/*
#include<stdio.h>
main()
{
    char *ptr;
    //gets(ptr);
    printf("%s",ptr);
}

*/


/*
#include<stdio.h>
main()
{
    char str[10] = {"01234"};

    //str[5] = 'z';
    printf("%s",str);
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p,i;
    p =(int *)malloc(20);

    printf("%u \n",p);
    free(p);

    printf("%d \n",sizeof(p));

}


*/


/*
#include<stdio.h>
main()
{
    int x;
    scanf("%5d",&x);

    printf("%d",x);
}
*/



//Lib functions
/*
#include<stdio.h>
#include<stdlib.h>
main()
{
    int val;
    char str[50], flt[50];
    float f = 123.4567;

    //atoi ->  string to integer
    val = atoi("12345");
    printf("%d\n",val);


    //itoa -> int to string
    itoa(1894,str,10);
    printf("%s \n",str);

    //gcvt -> float to string
    gcvt(f,6,flt);
    printf("%s \n",flt);
}
*/


//qsort
/*
#include<stdio.h>
#include<stdlib.h>

int comparator(const void *p1, const void *p2)
{
    const int *p3 = p1;
    const int *p4 = p2;
    return *p3 - *p4;
}
main()
{
    int i;
    int arr[] = {20,15,36,-8,2,7};
    int s = sizeof(arr)/sizeof(int);
    qsort(arr,s,sizeof(int),comparator);
    for(i =0 ;i<s ;i++)
    {
        printf("%d ",arr[i]);
    }
}
*/



//random
/*
#include<stdio.h>
main()
{
    int a = rand();
    printf("%d \n",a);

     int ab = rand();
    printf("%d \n",ab);
}
*/


//bitwise operator

/*
#include<stdio.h>
main()
{
    int a = 10;

    //left shift is multiply

    a = a << 5;


    printf("%d \n",a);

    //right shift div
    a = 50;
    a = a >> 4;

    printf("%d \n",a);
}
*/


/*
#include<stdio.h>
main()
{
    unsigned int a,b,c,d,e,f;
    a=b=c=d=e=f=32;

    a <<= 2;
    printf("%d \n",a);

    b >>= 2;
    printf("%d \n",b);

    c ^= 2;
    printf("%d \n",c);

    d |= 2;
    printf("%d \n",d);

    e &= 2;
    printf("%d \n",e);

    f = ~2;
    printf("%d \n",f);

}
*/

/*
#include<stdio.h>
main()
{
    int a;
    signed int b;
    unsigned int c ;

    a = b = c = 15;

    a <<= 2;
    printf("%d\n",a);

    b <<= 2;
    printf("%d\n",b);

    c <<= 2;
    printf("%d\n",c);
}

*/

/*
#include<stdio.h>

void hello(int n)
{
    printf("hello in int  %d \n",n);
}

main()
{
    hello(10);

    hello('A');

    hello(123.5f);

    hello("sachin");
}
*/


/*

#include<stdio.h>
main()
{
    char c = 'Hello Kids';
    printf("%c ",c);
}
*/



/*
#include<stdio.h>
main()
{
    int a = 10 , b = 5,c;
    float f1 = 10.5 ,f2 = 5.0,f3;

    c = a%b;
    printf("%d \n",c);


    f3 = f1%f2;
    printf("%f",f3);


}
*/


/*

#include<stdio.h>
main()
{
    union a
    {
        short int i;
        char ch[2];
    };
    union a u;

    u.ch[0] = 3;
    u.ch[1] = 2;

    printf("%d %d %d \n", u.ch[0] , u.ch[1] , u.i);
}

*/


//return in main()

#include<stdio.h>
void main()
{
    printf("hello \n");
}





















