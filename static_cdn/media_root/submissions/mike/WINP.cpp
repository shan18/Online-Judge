#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d=0,r=0;
	string s,rv="ranjeet",dv="dheeraj";
	for(int i=0;i<7;++i)
	{
		d+=dv.at(i)-96;
		r+=rv.at(i)-96;
	}
	int dc=0,rc=0;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int a=0;
		for(int i=0;i<s.length();++i)
		{
			a+=s.at(i)-96;
		
		}
		if(d==a)
		{
			dc++;
		}
		if(r==a)
		{
			rc++;
		}
	}
	if(dc>rc)
	{
		cout<<"dheeraj";
	}
	else
	if(dc<rc)
	{
		cout<<"ranjeet";
	}
	else
	{
		cout<<"draw";
	}
	return 0;
}
