#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,c;
	long long int a;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		c=0;
		scanf("%I64d",&a);
		for (j=1;j<=sqrt(a);j++)
		{
            if(a%j==0)
			{
                if(a/j==j) 
                c++; 
                else 
                c=c+2; 
            } 
        }
        printf("%d\n",c);
	}
	return 0;
}
