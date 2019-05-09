#include<iostream>
#include<math.h>
using namespace std;
int tdivisor(long long int n) 
{ 
	long long int c=0,i; 
	for (i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if (n/i==i) 
				c++;
            else 
				c=c+2;
		}
	}
	return c; 
}
int main()
{
	int n,i;
	long long int a;
	cin>> n;
	for(i=0;i<n;++i)
	{
		cin>>a;
		cout<<tdivisor(a)<<"\n";
	}
}
