#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],count=0,fm,sm;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;++i)
	{
		fm=arr[i];
		sm=0;
		for(int j=i+1;j<n;++j)
		{
			if(arr[j]>fm)
			{
				break;
			}
			if(arr[j]<fm and arr[j]>sm)
			{
				sm=arr[j];
				count++;
				//cout<<fm<<" "<<sm<<'\n';
			}
			else
			{
				continue;
			}
		}
		sm=0;
		for(int j=i-1;j>=0;--j)
		{
			if(arr[j]>fm)
			{
				break;
			}
			if(arr[j]<fm and arr[j]>sm)
			{
				sm=arr[j];
				count++;
			//	cout<<fm<<" "<<sm<<'\n';
			}
			else
			{
				continue;
			}
		}
	}
	cout<<count;
	return 0;
}
