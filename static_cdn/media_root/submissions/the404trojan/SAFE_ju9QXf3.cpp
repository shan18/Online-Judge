#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int count=0;
		long long n,a,b;
		cin>>n>>a>>b;
		long long arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
	    
		if(a<=n)
		cout<<"YES"<<endl;
		
		else cout<<"NO"<<endl;
	}
   
    return 0; 
} 
