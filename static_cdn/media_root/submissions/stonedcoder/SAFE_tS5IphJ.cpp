#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,count;
	long int b,mx,mn,dmax,dmin,l,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		count=0;
		long int arr[n];
		mx=INT_MIN;
		mn=INT_MAX;
		 l=1-b;
		 r=1+b;
		for(int i=0;i<n;++i)
		{
			cin>>arr[i];
			if(mx<arr[i])
			mx=arr[i];
			if(mn>arr[i])
			mn=arr[i];
		}
		
		dmin=mn+b;
		dmax=mx-b;
		if(dmax<dmin)
		{
			long int a=dmax;
			dmax=dmin;
			dmin=a;
		}
		bool flag=true;
		for(long int d=dmin;d<=dmax;++d)
		{
		    count=0;
		    l=d-b;
		    r=d+b;
		    for(int i=0;i<n;++i)
		    {
		    	if(arr[i]<=r and arr[i]>=l)
		    	{
		    		count++;
				}
			}
			if(count>=a)
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			cout<<"YES"<<'\n';
		}
		else
		{
			cout<<"NO"<<'\n';
		}
		
	}
	return 0;
}
