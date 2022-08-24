#include<stdio.h>
int main()
{
     int s;
     printf("enter a size of array\n");
     scanf("%d",&s);
     int a[s],i;
     printf("enter a array element\n");
     for(i=0;i<s;i++)
          scanf("%d",&a[i]);
     for(i=s-1;i>=0;i--)
          printf("%d ",a[i]);
     return 0;
}
