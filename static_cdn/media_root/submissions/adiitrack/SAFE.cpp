#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t1;
	long int n1,a1,b1,count1=0;
	cin>>t1;
	cin>>n1>>a1>>b1;
	 long int arr1[n1];
	
	for(int i1=0;i1<n1;++i1){
		cin>>arr1[i1];
		
	}
	for(int j1=0;j1<n1;++j1){
		if(arr1[j1]<=1+b1 and arr1[j1]>=1-b1){
			count1++;
		}
		else{
		 cout<<"NO";
              break; }
			    
		
		
	}
	 if(count1==n1)cout<<"YES";
	
	
	
	
	
	return 0;
}
