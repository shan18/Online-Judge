#include<iostream>
using namespace std;
int sizeoof(string s);
int main()
{
	int t,i,k,c1=0,c2=0;
	string s;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s;
		k=sizeoof(s);
		if(k==51)
		{
			c1++;
		}
		if(k==73)
		{
			c2++;
		}
	}
	if(c1>c2)
	{
		cout<<"dheeraj";
	}
	if(c2>c1)
	{
		cout<<"ranjeet";
	}
}
int sizeoof(string s)
{
int	l=s.length();
int i,k=0;
	for(i=0;i<l;i++)
	{
	k=k+s[i];	
	}
	k=k-60*l;
	return k;
}
