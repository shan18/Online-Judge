#include<stdio.h>
int main()
{
   int n,count=0;
   long long int i,fact=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   fact=fact*i;
   for(i=1;i<=fact;i++)
   {
      if(fact%i==0)
      count++;
   }
   printf("%d",count);
   return 0;

}
