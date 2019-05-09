#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long int n;
	cin>>n;
	long long b[n];
	long j=0;
	long x;
	long long sum=0;
	long i;
	while(i<n){
		cin>>x;
		if(x & 1){
			sum+=x;
		}
		else{
			b[j++]=x;
		}
		i++;
	}
	sort(b,b+j,greater<int>());
	for(long int i=0;i<j;i++){
			cout<<b[i]<<"\n";
		}
	if(j>=(n/2)){
		for(long int i=0;i<(n/2);i++){
			sum+= 2*b[i];
		}
	}
	else{
		for(long int i=0;i<j;i++){
			sum+= 2*b[i];
		}
	}
	cout<<sum;	
	return 0;
}
