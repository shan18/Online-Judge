#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	long long n;
	long long sum=0;
	int count=0;
	cin>>n;
	long long x[n];
	int j=0;
	for(int i=0;i<n;i++){
		cin>>x[i];
		
	}
	sort(x,x+n,greater<int>());
	for(int i=0;i<n;i++){
		if(count<(n/2) && x[i]%2==0)
		{
			sum+=x[i]*2;
			count++;
		}
		else sum+=x[i];
	}
	cout<<sum;
	return 0;
}
