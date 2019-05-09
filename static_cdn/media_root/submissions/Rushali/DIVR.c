#include<stdio.h>
void main()
{
    int n,a[100],c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
       {
           c=0;
           for(j=1;j<=a[i];j++)
           {
               if(a[i]%j==0)
               {
                c++;}
           }
        printf("\n%d",c);
       }

}
