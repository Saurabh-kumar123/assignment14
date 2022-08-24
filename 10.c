#include<stdio.h>
int main()
{
     int i,b[10],a[10];
     printf("enter a array of 10 element\n");
     for(i=0;i<10;i++)
     {
      scanf("%d",&a[i]);
          b[i]=a[i];
     }
     for(i=0;i<10;i++)
          printf("%d ",b[i]);
     return 0;
}
