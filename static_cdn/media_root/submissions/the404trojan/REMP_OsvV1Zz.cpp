#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	long long sum=0;
	int arr[n],odd[n],even[n];
	
	cin>>n;
	int j=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2==0){
			even[j]=arr[i];
			j++;
		}
		else{
			sum=sum+arr[i];
			
		}
	}
	sort(even, even+j);
	int mid=n/2;
	for(int x=0;x<mid;x++){
		sum=sum+(even[x]*2);
	}
	cout<<sum;
	return 0;
}
