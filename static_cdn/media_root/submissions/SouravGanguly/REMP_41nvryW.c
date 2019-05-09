#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,l=0;
    long int q,b[100000]={0};
    long long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&q);
        if(q%2==0)
        {
         b[j]=q;
         ++j;
        }
        else
        sum=sum+q;
    }
    for(i=0;i<j-1;i++)
    {
        for(k=0;k<j-i-1;k++)
        {
            if(b[k]<b[k+1])
            {
                q=b[k];
                b[k]=b[k+1];
                b[k+1]=q;
            }
        }
    }
    for(i=0;i<n/2;i++)
    {
    sum=sum+(2*b[i]);
    
    }
    for(l=i;l<j;l++)
    {
        sum=sum+b[l];
    }
    printf("%lld",sum);
}
