#include<iostream>
using namespace std;
int div(int x);
int main()
{
	int t,i;
	long n;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		cout<<div(n);
	}
}
int div(int x)
{
	int g=0,i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			g++;
		}
	}
	return(g);
}
