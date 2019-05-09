#include<iostream>
#include<cmath>
using namespace std;
int main()
{	
	long int n;
	cin>>n;
	long int a[n],a2=0,a5=0;
	int x;
	for(long int i=0;i<n;i++)
	{
		cin>>a[i];
	    while(1)
	    {
	    	x=a[i]%2;
	    	if(x==0)
	    	a2++;
	    	else
	    	break;
	    	a[i]=a[i]/2;
		}
		while(1)
		{
			x=a[i]%5;
	    	if(x==0)
	    	a5++;
	    	else
	    	break;
	    	a[i]=a[i]/5;
		}
	}
	if(a2>a5)
	cout<<a5;
	else
	cout<<a2;
	
}
