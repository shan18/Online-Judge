#include<iostream>
using namespace std;
int main()
{
	long int n,d=0,r=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		long int sum=0;
		for(int j=0;j<s.length();j++)
		{
			s[j]=s[j]-'a'+1;
			sum=sum+s[j];
		} 
		if(sum==51)
		d++;
		else if(sum==73)
		r++;
	}
	if(d>r)
	cout<<"dheeraj";
	else if(r>d)
	cout<<"ranjeet";
	else if(d==r)
	cout<<"draw";
}
