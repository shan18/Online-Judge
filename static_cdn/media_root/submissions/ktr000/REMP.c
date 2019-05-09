#include<stdio.h>

int main()
{
        int n,sum=0,i;
               scanf("%d",&n);
               int a[n];
               for(i=0;i<n;i++)
               {
                   scanf("%d",&a[i]);
                   if(i%2==0&&a[i]%2==0)
                   {
                       sum=sum+2*a[i];
                   }
                   else
                   {
                       sum=sum+a[i];
                   }
               }
                printf("%d",sum);
}
