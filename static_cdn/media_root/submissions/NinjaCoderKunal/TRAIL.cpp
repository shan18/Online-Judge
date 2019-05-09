#include<iostream>
using namespace std;
int czero(int a[],int n)
{
	int i,ct=0,cf=0;
	for(i=0;i<n;++i)
	{
		while(a[i]%2==0)
		{
			a[i]/=2;
			++ct;
		}
		while(a[i]%5==0)
		{
			a[i]/=5;
			++cf;
		}
	}
	return (ct<cf)? ct:cf;
}
int main()
{
	int n,i,a[100001];
	cin>>n;
	for(i=0;i<n;++i)
	cin>>a[i];
	cout<<czero(a,n);
	return 0;
}
