#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[19]={2,3,5,7,11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67},i,j,k=1,l,p;
	cin>>n;
	for(i=0;i<19;i++)
	{
		p=a[i];
		j=0;
		while(p<=n)
		{
			j=j+(n/p);
			p=p*a[i];
		}
		k=k*(j+1);
	}
	cout<<k;
	
}
