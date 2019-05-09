#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,t,j=0;
	cin>>n;
	vector<long int> v(n),x;
	long int sum=0;
	for(long int i=0;i<n;++i)
	{
		cin>>t;
		v[i]=t;
		
	}
	sort(v.begin(),v.end(),greater< long int>());
	for(long int i=0;i<n;++i)
	{
		if(v[i]%2==0 and (j<n/2))
		{
			sum+=2*v[i];
			j++;
		}
		else
		{
			sum+=v[i];
		}
	}
	cout<<sum;
	return 0;
}
