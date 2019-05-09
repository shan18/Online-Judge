#include<iostream>
using namespace std;
void Sort(long int b[],long int count)
{
	int i,j,min,temp;
	for(i=0;i<count;i++)
	{
		min=i;
		for(j=i+1;j<count;j++)
		{
			if(b[j]<b[min])
			min=j;
		}
		temp=b[min];
		b[min]=b[i];
		b[i]=temp;
	}
}
int main()
{
	long int n,count=0;
	cin>>n;
	long int a[n];
	for(long int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		count++;
	}
	long int b[count],j=0,c[n-count],k=0;
	for(long int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	Sort(b,count);
//	for(int i=0;i<count;i++)
//	cout<<b[i]<<"  ";
    long int sum=0;
	if(count>n/2)
	{
		for(int i=0;i<=n/2;i++)
		{
			sum=sum+2*b[count-1];
			count--;
		}
		
	    for(int i=count;i>=0;i--)
	    sum=sum+b[count];
	    for(int i=0;i<n-count;i++)
	    sum=sum+c[i];
	}
	else
	{
		for(int i=0;i<count;i++)
		sum=sum+2*b[i];
		for(int i=0;i<n-count;i++)
		sum=sum+c[i];
	}
	cout<<sum;
	
}












