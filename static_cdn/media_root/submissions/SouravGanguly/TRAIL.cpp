#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j=0,k=0,l;
   long long int a,p;
   cin>>n;
   for(i=0;i<n;i++)
   {
   	cin>>a;
   	p=a;
   	while(a%2==0&&a>=2)
   	{
   		++k;
   		a=a/2;
	   }
	   	while(p%5==0&&p>=5)
   	{
   		++j;
   		p=p/5;
	   }
}
if(k>j)
cout<<j;
else
cout<<k;
}
