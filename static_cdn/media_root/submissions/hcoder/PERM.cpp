#include <iostream>
using namespace std;
int main(){
	int n,max=0,x[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
		if(max<x[i]) max=x[i];
	}
	int max2=0;
	for(int i=0;i<n;i++){
		if(x[i]<max&&x[i]>max2) max2=x[i];
	}
	cout<<max2;
	return 0;
}
