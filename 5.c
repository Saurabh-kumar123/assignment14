#include<stdio.h>
int main()
{
     int a[10],i,j,max;
     float avg;
     printf("enter a 10 element of array\n");
     for(i=0;i<=9;i++)
          scanf("%d",&a[i]);
          max=a[0];
          for(i=0;i<=9;i++)
          if(max>a[i])
          max=a[i];
     printf("smaller values is %d",max);
     return 0;
}



