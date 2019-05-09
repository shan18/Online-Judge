#include<stdio.h>

int main()
{
     int n,s=1,i,j,a[100],c=0,d=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
          c++;
      }
      if(a[i]%5==0)
      {
          d++;
      }
    }
    if((c-d!=c)&&(d-c!=d))
    {
    if(c<d){
        printf("%d",c);
    }
    else if(c>d){
        printf("%d",d);
    } 
    else
    {
        printf("%d",c);
    }
    }
    else{
        printf("0");
    }
    
    return 0;
}
