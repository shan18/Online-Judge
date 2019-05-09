#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,count;
	long int b,l,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		count=0;
		long int arr[n];
		 l=1-b;
		 r=1+b;
		for(int i=0;i<n;++i)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;++i)
		{
			if(arr[i]<=r and arr[i]>=l)
			{
				count++;
			}
		}
		if(count>=a)
		{
			cout<<"N0"<<'\n';
		}
		else
		{
			cout<<"YES"<<'\n';
		}
//		cout<<count;
	}
	return 0;
}
