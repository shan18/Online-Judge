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
		sort(arr,arr+n);
		for(i=0;i<n;i++){
			min=arr[i];
			count=0;
			for(int j=i;j<n;j++){
			long int max=min+(2*b);
			if(arr[j]<=max&&arr[j]>=min) count++;
		}
		
		if(count<a) {
		cout<<"YES"<<endl;
		break;
		}
		else {
		cout<<"NO"<<endl;
		break;
		}
	}
}
}
