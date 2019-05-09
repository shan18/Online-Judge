#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j,k,a,t;
   long int w[100000],b,small=111111111,big=-111111111;
   cin>>t;
   for(i=0;i<t;i++)
   {  cin>>n>>a>>b;
   small=111111111,big=-111111111;
   	for(j=0;j<n;j++)
   	{
   		cin>>w[j];
   		if(small>w[j])
   		{
   			small=w[j];
		   }
		   if(big<w[j])
		   {
		   	big=w[j];
		   }
		   	
	   }
	   if(big-small<2*b)
   	       cout<<"YES"<<endl;
			  else
			  cout<<"NO"<<endl;
	
   }
   
   
   
}
