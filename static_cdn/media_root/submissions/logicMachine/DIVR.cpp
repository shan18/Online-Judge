#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,count=0;
		cin>>n;
		for(long long int i=1;i<=n/2;i++)
		{
			if(n%i==0)
			count++;
		}
		cout<<count+1<<endl;
	}
}
