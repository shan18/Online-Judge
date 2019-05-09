#include<stdio.h>

void main()
{
int a[100000],b[100000],d[100000],sum=0,max=0, n,i,k=0,l=0;
long long c[100000],j;
scanf("%d",&n);

for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        b[j]=a[i];
        j++;
    }
    else
    {
        d[j]=a[i];
        j++;
    }
}
while(b[k]!='\0')
{
    l++;
    k++;
}

for (i= 0 ; i < l; i++)
  {
    for (j = i+1 ; j < l; j++)


    {
      if (b[i] < b[j])
      {
        swap   = b[i];
        b[i]   = b[j];
        b[j] = swap;
      }
    }
  }

for(i=1;i<n;i+2)
{
    c[i]=b[j];
    j++;
}

for(i=0;i<n;i+2)
{
    c[i]=d[j];
    j++;
}
for(i=0;i<n;i++)
{
    printf("\n%lld",c[i]);
}
if(l>n/2)

{
    for(i=0;i<n/2;i++)
 {
    b[i]=2*b[i];
    sum+=b[i];
 }

}
else
{
    for(i=0;i<l;i++)
    {
        b[i]=b[i]*2;
        sum+=b[i];
    }
}

printf("\n%d",sum);


}
