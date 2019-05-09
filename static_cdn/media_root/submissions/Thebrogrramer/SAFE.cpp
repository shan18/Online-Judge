#include<iostream>
using namespace std;
int main()
{
int t,i,j;
cin>>t;
while(t--){
	int n,a,b,flag=0;
	cin>>n>>a>>b;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	for(i=0;i<j;++i){
	for(j=n-1;j>i;++j){
		if( max ( (arr[j]-arr[i]) , (arr[i]-arr[j]) )>a )
		continue;
		else {flag=0; break;}
	}
	if(flag==0) { cout<<"NO\n"; break;}
	if(i==j-1&&flag==1)
	cout<<"YES\n";
	}
}
}
