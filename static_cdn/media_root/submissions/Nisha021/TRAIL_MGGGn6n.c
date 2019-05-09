#include<stdio.h>
int main()

{
    int a[100000],n,i,p=1,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
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
