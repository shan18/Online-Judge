#include<stdio.h>
void main()
{
    int n,c=0,j,i;
    scanf("%d",&n);
    if(n<=70)
    {
        for(i=1;i<=n;i++)

        {
            for(j=1;j<=i;j++)
           {
            if(i%j==0)
            {
                c++;
            }
           }
        }
        printf("\n%d",c);
     }
}
