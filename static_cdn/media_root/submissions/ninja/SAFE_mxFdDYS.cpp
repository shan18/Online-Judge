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
		int k=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=0;i<n;i++){
			min=arr[i];
			count=0;
			long long int max=min+(2*b);
			for(int j=i;j<n;j++){
			if(arr[j]>=min&&arr[j]<=max) count++;
		}
		
		if(count>=a) {
			k=1;
		cout<<"NO"<<endl;
		break;}
		}
		 if(k==0) cout<<"NO"<<endl;
	}
}

