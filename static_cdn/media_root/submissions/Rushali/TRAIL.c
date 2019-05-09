#include<stdio.h>
void main()
{

    int a[100000],i,n,p=1,c=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p=p*a[i];
    }
    while(p!=0)
    {
      if(p%10==0)
        c++;
      p=p/10;
    }
    printf("number of trailing zeros are %d",c);

}
