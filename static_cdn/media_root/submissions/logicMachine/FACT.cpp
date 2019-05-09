#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a[n]={0};
	int count=0;
	for(int i=2;i<n;i++)
	{
		for(int j=i*i;j<n;j=j+i)
		{
			a[j-1]=1;
		}
	}
	for(int i=1;i<n;i++)
	{
		if(a[i-1]==0)
		count++;
	}
	int b[count],j=0;
	for(int i=1;i<n;i++)
	{
		if(a[i-1]==0)
		{
			b[j]=i;
			j++;
		}
	}
//	for(int j=0;j<count;j++)
//	cout<<b[j]<<" ";
//	cout<<"count="<<count;
	
	
	int c[count-1]={0};
	for(int i=1;i<count;i++)
	{
		int k=1;
		long int x,z;
		while(1)
		{
			x=pow(b[i],k);
			if(x>n)
			break;
			z=n/x;
			c[i-1]+=z;
			k++;
		}
	}
	int sum=1;
	for(int i=0;i<count-1;i++)
	sum=sum*(c[i]+1);
	cout<<sum;
}






