#include<stdio.h>
int main()

{
    int i,p=1,l=0;
    long int n;
    long long int a[10000];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
         for(i=0;i<n;i++)
            p=p*a[i];
         while(p%10==0)
         {
             l++;
             p=p/10;
         }
         printf("%d",l);

         return 0;

}
