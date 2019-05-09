#include<iostream>
using namespace std;
int main(){
	int n,i,cnt=0;
	cin>>n;
	long long int a[n],pro=1;
	for(i=0;i<n;++i){
	cin>>a[i];
	pro*=a[i];
	}
if(pro==0)
cout<<1;
else{
	while(pro%10==0){
	++cnt;
	pro/=10;
	}
cout<<cnt;
}
}
