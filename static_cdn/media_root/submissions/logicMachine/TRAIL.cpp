#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//	int t;
//	cin>>t;
//	while(t--)
//	{
	
	long int n;
	cin>>n;
	long int a[n],mul=1;
	for(long int i=0;i<n;i++)
	{
		cin>>a[i];
		mul=mul*a[i];
	}
	long int x,z;
	double i=1;
	while(1)
	{
	    x=pow(10,i);
	    z=mul%x;
	    if(z!=0)
	    break;
	    i++;
	}
	cout<<i-1;
  // }
}
