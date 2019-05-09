#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{   long int i,j,k=0,l=0,n,d=0,r=0;
    char a[100];
   cin>>n;
   for(i=0;i<n;i++)
   {  k=0;
   	cin>>a;
   	l=strlen(a);
   	for(j=0;j<l;j++)
   	{
   		k=k+a[j]-96;
	   }
	   
   	if(k==51)
   	++d;
   	if(k==73)
   	++r;
   }
   if(r>=d)
   cout<<"ranjeet";
   else
   cout<<"dheeraj";
}

