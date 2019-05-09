#include<bits/stdc++.h>
using namespace std;
void check(int arr[],int n,int a, int b){
int i,j,flag=1;


for(i=0;i<j;++i){
	for(j=n-1;j>i;--j)
	{
		int m=max( (arr[j]-arr[i]),(arr[i]-arr[j]) );
		if(m==2*b)
		if(j-i+1>=a)
		flag=0;
	}
}

if(flag)
cout<<"YES\n";
else cout<<"NO\n";

}
int main()
{
int t;
cin>>t;
while(t--){
	int n,a,b,flag=0;
	cin>>n>>a>>b;
	int arr[n];
	sort(arr,arr+n);
	for(int i=0;i<n;++i)
	cin>>arr[i];
	check(arr,n,a,b);
}
}
