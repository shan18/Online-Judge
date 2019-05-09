#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n,a,b;
		cin>>n>>a>>b;
		long long arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		if(a>b)
		 cout << "NO"<<endl;
		else
			cout<<"YES"<<endl; 
	}
   
    return 0; 
} 
