#include<iostream>
using namespace std;
int fact(int x);
int factt(int y);
int main()
{
	int n,t;
	long int s;
	cin>>n;
	s=fact(n);
	t=factt(s);
	cout<<t;
}
int fact(int x)
{
	int i,r=1;
	for(i=1;i<=x;i++)
	{
		r=r*i;
	}
	return(r);
	
}
int factt(int y)
{
	int j,k=0;
	for(j=1;j<=y;j++)
	{
		if(y%j==0)
		{
			k++;
		}
	}
	return (k);
}
