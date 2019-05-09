#include<stdio.h>
void main()
{
    int n,c=0,fact=1,i;
    scanf("%d",&n);
    if(n<=70)
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }

        for(i=1;i<=fact;i++)
        {
            if(fact%i==0)
            {
                c++;
            }
        }printf("\n%d",c);
    }
}
