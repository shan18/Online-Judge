#include<iostream>
using namespace std;
int main()
{
	int r,i,s=0;long j=1;
	cin>>r;
	for(int i=1;i<=r;i++)
	{
		j=j*i;
	}
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		{
			s++;
		}
	}
	cout<<s;
}
