#include<iostream>
using namespace std;
int main(){
	int n,i,n2=0,n5=0;
	cin>>n;
	long long int a,b;
	for(i=0;i<n;++i){
	cin>>a;
	b=a;
	while(b%2==0){
	++n2;
	b/=2;
	}
	while(a%5==0){
	++n5;
	a/=5;
	}
	}
	cout<<min(n2,n5);
}
