#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,count=0;
	long long int sum=0;

	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
// 	for(i=0;i<n;i++){
// 		cout<<arr[i]<<endl;
// 	}
	//cout<<"hllo"<<endl;
	
	int mid=n/2;
	for(i=n-1;i>=0;i--){
		if(arr[i]%2==0&&count<mid){
			sum=sum+(arr[i]*2);
			count++;
		}
		else sum=sum+arr[i];
		
	}
	cout<<sum;
}
