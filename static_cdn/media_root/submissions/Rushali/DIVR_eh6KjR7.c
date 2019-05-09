#include<stdio.h>
void main()
{
    unsigned long long a[100],c=0,j;
    int n,i;
    scanf("%d",&n);
    if(0<=n<=100)
   {

     for(i=0;i<n;i++)
    {
       scanf("%llu",&a[i]);
    }

    for(i=0;i<n;i++)
       {
           if(0<=a[i]<=10^12)
          {
           c=0;
           for(j=1;j<=a[i];j++)
           {
               if(a[i]%j==0)
               {
                c++;}
           }
        printf("\n%llu",c);
          }
       }
     }
}






