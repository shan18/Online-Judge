#include<stdio.h>
int main()

{
    int n, i,p=1,l=0;

    long long int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%LLd",&a[i]);
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
