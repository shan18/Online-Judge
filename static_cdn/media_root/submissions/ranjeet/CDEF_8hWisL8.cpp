#include<bits/stdc++.h>
using namespace std;
bool comp(const int& a, const int &b){
	if(a%2==b%2){
		return a>b;
	}
	else if(a%2==1){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	long long s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		s=s+a[i];
	}
	sort(a,a+n,comp);
	for(int i=0;i<n/2 && a[i]%2==0;i++){
		s+=a[i];
	}
	cout<<s<<endl;
	return 0;
}