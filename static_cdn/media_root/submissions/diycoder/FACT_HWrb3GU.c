#include<stdio.h>
int main()
{
   int n,i,count=0;
   long long int j,fact=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   fact=fact*i;
   for(j=1;j<=fact;j++)
   {
      if(fact%j==0)
      count++;
   }
   printf("%d",count);
   return 0;

}
