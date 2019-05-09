#include<iostream>
using namespace std;

int main(){
	long long n,x;
	long long sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x%2==0)
			sum=sum+(x*2);
		else
			sum=sum+x;
	}
	cout<<sum;
	return 0;
}
