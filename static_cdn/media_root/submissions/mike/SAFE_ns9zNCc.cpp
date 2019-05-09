#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t;
	long int n,a,b,count=0;
	cin>>t;
	cin>>n>>a>>b;
	  int arr[n];
	
	for(int i=0;i<n;++i){
		cin>>arr[i];
		
	}
	for(int j=0;j<n;++j){
		if(arr[j]<=1+b and arr[j]>=1-b){
			count++;
		}
		else{
		 cout<<"NO";
              break; }
			    
		
		
	}
	 if(count==n)cout<<"YES";
	
	
	
	
	
	return 0;
}
