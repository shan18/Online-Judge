#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t2;
	long int n2,a2,b2,count2=0;
	cin>>t2;
	cin>>n2>>a2>>b2;
	 long int arr2[n2];
	
	for(int i2=0;i2<n2;++i2){
		cin>>arr2[i2];
		
	}
	for(int j2=0;j2<n2;++j2){
		if(arr2[j2]<=1+b2 and arr2[j2]>=1-b2){
			count2++;
		}
		else{
		 cout<<"NO";
              break; }
			    
		
		
	}
	 if(count2==n2)cout<<"YES";
	
	
	
	
	
	return 0;
}
