#include<iostream>
using namespace std;
int main()
{
	int t,i,n,c=0;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
		cout<<c;
	}
}
