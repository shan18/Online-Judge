#include<stdio.h>
void main()
{
int a[100000],n,i,sum=0;
printf("enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);

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
printf("%d",sum);
}
