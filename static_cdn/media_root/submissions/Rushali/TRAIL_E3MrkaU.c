#include<stdio.h>
void main()
{

    unsigned long long int a[100000];
    int i,n,p=1,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
        p=p*a[i];
    }
    while(p!=0)
    {
      a[c]=p%10;
      p=p/10;
      c++;
    }
    c=0;
    while(a[c]==0)
    {

        k++;
        c++;
    }
    printf("\n%d",k);

}
