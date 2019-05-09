#include<stdio.h>
void main()
{
    int n,c=0,j,i,a[1000];
    scanf("%d",&n);
    if(n<=70)
    {
        for(i=1;i<=n;i++)

        {
            for(j=1;j<=i;j++)
           {
            if(i%j==0)
            {
                a[i]=j;
                printf("divisors=%d",a[i]);
            }
           }
        }

        for(i=0;i<n-1;i++)

        {
           if(a[i]==a[i+1])
           continue;
           else
            c++;
        }
        printf("\n%d",c);
     }
}
