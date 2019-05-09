#include<stdio.h>
void main()
{
    unsigned long long int n,p[1000],i;
    int f=0,e=0,t=0;
    printf("enter num of elements");
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&p[i]);
    }
    for(i=0;i<n;i++)
        {
            while(p[i]%10==0)
                {
                    e++;
                    p[i]/10;
                }
                printf("ten walla%d",e);
            while(p[i]%2==0)
                {
                    t++;
                    p[i]/2;
                }
                printf("two walla%",t);
            while(p[i]%5==0)
                {
                    f++;
                    p[i]/5;
                }
                printf("five walla%d",f);

        }

}
