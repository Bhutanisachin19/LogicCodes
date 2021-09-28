#include<stdio.h>
#include<string.h>
#define str_size 100
#define chr_no 255

void main()
{
    char str[str_size];
    int ch_fre[chr_no]={0};
    int i,max;
    int ascii;
    fgets(str, sizeof str, stdin);
    i=0;
    while(str[i]!='\0')
    {
        ascii=(int)str[i];
        ch_fre[ascii]+= 1;
        i++;
    }

    max=0;
    for(i=0;i<chr_no;i++)
    {
            if(ch_fre[i] > ch_fre[max])
            {
                max=i;
            }
    }

    printf("%c %d",max,ch_fre[max]);
}
