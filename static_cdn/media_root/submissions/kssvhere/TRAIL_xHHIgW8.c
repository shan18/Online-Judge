#include<stdio.h>

int main()
{
    int n,s=1,i,a[100],c=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("% d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        s=s*a[i];
    }
    while((s%10)==0)
    {
        c++;
        s=s/10;
    }

    printf("\n%d",c);
    return 0;
}
