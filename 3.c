#include<stdio.h>
int main()
{
     int a[10],i,even=0,odd=0;
     float avg;
     printf("enter a 10 element of array\n");
     for(i=0;i<=9;i++)
     {
          scanf("%d",&a[i]);
          if(a[i]%2==0)
          even=even+a[i];
          else
               odd=odd+a[i];
     }
     printf("sum of even  %d\nsum of odd %d",even,odd);

     return 0;
}


