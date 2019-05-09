#include<iostream>
using namespace std;
int div(int x);
int main()
{
	int t,n,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		cout<<div(n)<<endl;
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
