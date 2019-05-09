#include<stdio.h>
int main()
{
    int n,i,z;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    z=czero(a,n);
    printf("%d",z);
    return 0;
}
int czero(int a[],int n)
{
    int i,ct=0,cf=0;
    for(i=0;i<n;++i)
    {
        while(a[i]%2==0)
        {
            a[i]/=2;
            ++ct;
        }
        while(a[i]%5==0)
        {
            a[i]/=5;
            ++cf;
        }
    }
    if(ct<cf)
    return ct;
    else
    return cf;
}
