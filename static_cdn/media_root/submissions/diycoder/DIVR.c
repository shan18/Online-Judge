#include<stdio.h>
int main()
{
    int i,j,t,a[100],count[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
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
    }
    for(i=0;i<t;i++)
    printf("%d\n",count[i]);

    return 0;
}
