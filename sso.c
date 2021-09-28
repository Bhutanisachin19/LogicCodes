#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);
    int arr[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]=arr[i]/5;
        a[i]=a[i]+1;
        a[i]=a[i]*5;


        if(arr[i] >=38 &&  (arr[i]-a[i] < 3 && arr[i] -a[i] > 0))
           {
               arr[i]=a[i];
           }
    }




  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }

}
