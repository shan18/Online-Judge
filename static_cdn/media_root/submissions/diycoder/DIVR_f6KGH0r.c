#include<stdio.h>
int main()
{
    int i=0,j,t;
    scanf("%d",&t);
    int a[t],count[t];
    while(i<t)
    {
        scanf("%d",&a[i]);
        j=1;
        count[i]=0;
        while(a[i]>=j)
            {
            if(((a[i]%j)==0))
            count[i]++;
            j++;
            }
            i++;
    }
    i=0;
    while(i<t)
    {printf("%d\n",count[i]);
      i++;}
    return 0;
}
