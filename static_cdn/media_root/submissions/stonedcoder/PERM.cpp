#include<bits/stdc++.h>
using namespace std;
pair <int,int> f(int arr[],int l,int r)
{
	int fm=INT_MIN,sm=INT_MIN;
	for(int i=l;i<=r;++i)
	{
		if(arr[i]>fm)
		
		{
			sm=fm;
			fm=arr[i];
		}
		else
		if(arr[i]>sm)
		{
			sm=arr[i];
		}
	}
	pair<int,int> p=make_pair(fm,sm);
	return p;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	pair<int,int> p;
	set < pair<int,int> > s;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			p=f(arr,i,j);
			//cout<<p.first<<" "<<p.second<<'\n';
			s.insert(p);
		}
	}
	cout<<s.size();
	return 0;
}
