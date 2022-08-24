#include<stdio.h>
int main()
{
     int i,a[10],larg=0,slarg=0,temp;
     printf("enter a array of 10 element\n");
      for(i=0;i<10;i++)
          scanf("%d",&a[i]);
          larg=a[0];
     for(i=1;i<10;i++)
     {
          if(larg<a[i])
          {
           slarg=larg;
            larg=a[i];
          }
          if(a[i]>slarg&&larg>a[i])
          slarg=a[i];
     }
     printf("%d second largest",slarg);
     return 0;
}
