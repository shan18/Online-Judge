#include<stdio.h>
void main()
{
long long  a[100000],sum=0;
int n,i;
printf("enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  scanf("%lld",&a[i]);

 }
for(i=0;i<n;i++)
{
    if(i%2==0&&a[i]%2==0)
    {a[i]=2*a[i];}
}
for(i=0;i<n;i++)
{
   sum+=a[i];
}
printf("%lld",sum);
}
