#include<stdio.h>
void main()
{
    int a[100000],b[100000],i,n,p=1,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p=p*a[i];
    }
    while(p!=0)
    {
      b[c]=p%10;
      p=p/10;
      c++;
    }
    c=0;
    while(b[c]==0)
    {

        k++;
        c++;
    }
    printf("\n%d",k);

}
