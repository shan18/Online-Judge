#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int count=0;
		long long sum=0;
		long long n,a,b;
		cin>>n>>a>>b;
		long long arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
			sum+=arr[j];
		}
		
		long long avg;
	    avg= sum/n;
	    
	  //  else avg= sum/n +1;
	//	sort(arr,arr+n);
	long long min= 1-b;
	long long max=1+b;
	
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=min && arr[i]<=max)
			count++;
		}
		if(count>=a)
		cout<<"NO"<<endl;
	
		else cout<<"YES"<<endl;
	}
   
    return 0; 
} 
