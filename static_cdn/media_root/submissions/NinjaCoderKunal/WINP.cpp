#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,r=0,d=0,sum,l,j;
	char s[100001];
	cin>>n;
	for(i=0;i<n;++i)
	{
		sum=0;
		cin>>s;
		l=strlen(s);
		for(j=0;j<l;++j)
		sum+=s[j]-96;
		if(sum==51)
		++d;
		else if(sum==73)
		++r;
	}
	if(d>r)
	cout<<"dheeraj";
	else if(d<r)
	cout<<"ranjeet";
	else
	cout<<"draw";
	return 0;
}
