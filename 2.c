#include<stdio.h>
int main()
{
     int a[10],i,sum=0;
     float avg;
     printf("enter a 10 element of array\n");
     for(i=0;i<=9;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     printf("sum of array is  %d",sum);
     avg=sum/10.0;
     printf("average is  %f",avg);
     return 0;
}

