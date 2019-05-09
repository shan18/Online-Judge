#include<stdio.h>
int main()
{
   int n,i,count=0;
   long int prod=1,a[100000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%ld",&a[i]);
   for(i=0;i<n;i++)
   prod=prod*a[i];
   while(prod%10==0)
   {
     prod=prod/10;
     count++;
   }
   printf("%d",count);
   return 0;
}


