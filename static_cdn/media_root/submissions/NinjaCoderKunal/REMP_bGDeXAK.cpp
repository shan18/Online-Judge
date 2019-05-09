#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j=0,a[100001],b[100001],sum=0;
	cin>>n;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]%2==0)
		{
			b[j]=a[i];
			++j;
		}
	}
	if(j<=n/2)
	{
		for(i=0;i<j;++i)
		    sum+=b[i];
	}
	else
	{
		sort(b,b+j);
		for(i=n/2;i>0;--i)
			sum+=b[i];
	}
	cout<<sum;
	return 0;
}
