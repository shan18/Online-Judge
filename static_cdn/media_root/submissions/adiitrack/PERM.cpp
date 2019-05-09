#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1;
	cin>>n1;
	long int arr1[n1],count1=0,fm1,sm1;
	for(int i1=0;i1<n1;++i1)
	{
		cin>>arr1[i1];
	}
	for(int i1=0;i1<n1;++i1)
	{
		fm1=arr1[i1];
		sm1=0;
		for(int j1=i1+1;j1<n1;++j1)
		{
			if(arr1[j1]>fm1)
			{
				break;
			}
			if(arr1[j1]<fm1 and arr1[j1]>sm1)
			{
				sm1=arr1[j1];
				count1++;
				//cout<<fm<<" "<<sm<<'\n';
			}
			else
			{
				continue;
			}
		}
		sm1=0;
		for(int j1=i1-1;j1>=0;--j1)
		{
			if(arr1[j1]>fm1)
			{
				break;
			}
			if(arr1[j1]<fm1 and arr1[j1]>sm1)
			{
				sm1=arr1[j1];
				count1++;
			//	cout<<fm<<" "<<sm<<'\n';
			}
			else
			{
				continue;
			}
		}
	}
	cout<<count1;
	return 0;
}
