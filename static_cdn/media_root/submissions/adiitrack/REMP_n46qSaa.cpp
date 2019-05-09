#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int k2,t,j=0;
	cin>>k2;
	vector<long int> v1(k2);
	long int sum1=0;
	for(long int z=0;z<k2;++z)
	{
		cin>>t;
		v1[z]=t;
		
	}
	sort(v1.begin(),v1.end(),greater< long int>());
	for(long int t=0;t<k2;++t)
	{
		if(v1[t]%2==0 and (j<k2/2))
		{
			sum1+=2*v1[t];
			j++;
		}
		else
		{
			sum1+=v1[t];
		}
	}
	cout<<sum1;
	return 0;
}
