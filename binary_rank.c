
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int num,i,leng;
    int count = 0;
    char numbr_str[50];

    scanf("%d",&num);

    itoa(num,numbr_str,2);

    printf("%s",numbr_str);

    leng = strlen(numbr_str);

    for(i=0;i<leng-1;i++)
    {
        if(numbr_str[i] == 49) //49 is ascii of 1
        {
            count++;
        }

    }

    printf(" %d \n",count);
    return 0;

}
