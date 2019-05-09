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
	    
		sort(arr,arr+n);
		long long low_min=arr[0]-b;
		long long high_min=arr[0]+b;
		
		long long low_max=arr[n-1]-b;
		long long high_max=arr[n-1]+b;
		for(int i=0;i<n;i++)
		{
			if((arr[i]>low_min && arr[i]<high_min)|| (arr[i]>low_max && arr[i]<high_max))
			count++;
		}
		if(count>=a)
		cout<<"NO"<<endl;
		
		else cout<<"YES"<<endl;
	}
   
    return 0; 
} 
