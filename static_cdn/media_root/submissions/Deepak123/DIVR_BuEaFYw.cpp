#include<iostream>
using namespace std;
int main()
{
	int t,i,c=0;
	long int n;
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
