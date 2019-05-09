#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,count=0;
		cin>>n;
		
		long long int a[n]={0};
		for(long long int i=2;i<n;i++)
		{
			for(long long int j=i*i;j<n;j=j+i)
			{
				a[j-1]=1;
			}
		}
		for(long long int i=1;i<n;i++)
		{
			if(a[i-1]==0)
			{
				count++;
			}
		}
		long long int c[count],j=0,d[count]={0},x;
		for(int i=1;i<n;i++)
		{
			if(a[i-1]==0)
			{
				c[j]=i;
				j++;
			}
		}
		for(long long int i=1;i<count;i++)
		{
			 j=1;
			while(1)
			{
				x=pow(c[i],j);
				if(n%x==0)
				{
					d[i]=j;
					j++;
				}
				else 
				break;
			}
		}
		long long int sum=1;
		for(long long int i=1;i<count;i++)
		sum=sum*(d[i]+1);
		if(sum==1)
		cout<<sum+1<<endl;
		else
		cout<<sum<<endl;
	}	
}
