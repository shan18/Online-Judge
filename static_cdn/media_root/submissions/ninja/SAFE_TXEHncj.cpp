#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	long long int n,a,b,i,num,count,min;

	while(t--){
		cin>>n>>a>>b;
		long int arr[n];
		min=0;
		count=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<=min) min=arr[i];
		}
		for(i=0;i<n;i++){
			long int max=min+(2*b);
			if(arr[i]<=max&&arr[i]>=min) count++;
		}
		
		if(count<a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
