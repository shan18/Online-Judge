#include<bits/stdc++.h>
using namespace std;
main(){
	long n,i;
	cin>>n;
	long arr[n];
	long max,div=5,count=0,num;
	for(i=0;i<n;i++){
		cin>>num;
		if(num>=max) max=num;
		arr[i]=num;
	}
	while(div<=max){
	      for(i=0;i<n;i++){
	      	if(arr[i]%div==0) count++;
		  }
		  div=div*5;
	}
	cout<<count;
}
