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
		
		long long min,max;
		
		for(long long j=0;j<n;j++){
		cin>>arr[j];
		}
		min=INT_MAX;
		max=INT_MIN;
		for(long long j=0;j<n;j++)
		{
			if(max<arr[j])
				max=arr[j];
				
		  	if(min>arr[j])
		  		min=arr[j];
		}
		//cout<<max<<" "<<min<<endl;
		  long long MinFirst = min;
            long long MinLast = min + (2*b);
            //getting range with max value
            long long MaxFirst = max - (2*b);
            long long MaxLast = max;
            
            //cout<<MinFirst<<" "<<MinLast<<" "<<MaxFirst<<" "<<MaxLast<<endl;
            
            long long count1 = 0, count2 = 0;
            for(long long j=0;j<n;j++){
			if(arr[j]>= MinFirst && arr[j] <= MinLast)
                    count1++;
                if(arr[j] >= MaxFirst && arr[j] <= MaxLast)
                    count2++;
		}
		//cout<<count1<<" "<<count2<<endl;
		
		if(count1 >= a || count2 >= a)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
	}
    return 0; 
} 
