#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,c=0;
	long int f=1;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	f=f*i;
	for(i=1;i<=sqrt(f);i++)
		{
            if(f%i==0)
			{
				if(f/i==i) 
                c++; 
                else 
                c=c+2; 
            } 
        }
    printf("%d",c);
	return 0;    
}
