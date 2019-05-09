#include<stdio.h>
int main()
{
   int n,i,count=0;
   long long int prod=1,a[100000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%lld",&a[i]);
   for(i=0;i<n;i++){
   if(a[i]>=1 && a[i]<=1000000000 && n>=1)
   prod=prod*a[i];
   else
    return 0;
   }
   while(prod%10==0)
   {
     prod=prod/10;
     count++;
   }
   printf("%d",count);
   return 0;
}
