#include<stdio.h>
int main()
{
     int a[10],i,sum=0;
     printf("enter a 10 element of array\n");
     for(i=0;i<=9;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     printf("sum of array is  %d",sum);
     return 0;
}
