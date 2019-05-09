#include<bits/stdc++.h>   
using namespace std;
int main()
{
int n,i,j=0;
cin>>n;
long long int a[n],sum=0;
long long int b[n];
for(i=0;i<n;++i){
	
	cin>>a[i];
	sum+=a[i];
	if(a[i]%2==0)
	{
	b[j]=a[i];
	++j;
	}
}
sort(b,b+j);
int m=n/2;
if(j>m)
while(m--)
	{
		sum+=b[j-1];
	}
else
for(i=0;i<j;++i)
sum+=b[i];
cout<<sum;
}
