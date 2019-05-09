#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int a,b,n,count,l,r,i,d;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		count=0;
		long int arr[n];
		d=-5+b;
		 l=d-b;
		 r=d+b;
		for(i=0;i<n;++i)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;++i)
		{
			if(arr[i]<=r and arr[i]>=l)
			{
				count++;
			}
		}
		if(count<=a)
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
