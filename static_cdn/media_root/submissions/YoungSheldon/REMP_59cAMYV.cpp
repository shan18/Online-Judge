#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long long int n;
	cin>>n;
	long long b[n];
	long long j=0;
	long long x;
	long long sum=0;
	long long i;
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
	sort(b,b+j,greater<long long>());
	if(j>=(n/2)){
		for(long long i=0;i<(n/2);i++){
			sum+= 2*b[i];
		}
	}
	else{
		for(long long i=0;i<j;i++){
			sum+= 2*b[i];
		}
	}
	cout<<sum;	
	return 0;
}
