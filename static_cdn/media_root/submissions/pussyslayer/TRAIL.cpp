#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	long int arr[n];
	long long int prod=1;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		prod*=(long long int)(arr[i]);
	}
	
	while(1)
	{
		if(prod%10==0)
		{
			count++;
			prod/=10;
		}
		else
		{
			break;
		}
	}
	cout<<count;
	return 0;
}
