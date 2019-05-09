#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	long long n,x;
	long long sum=0;
	int count=0;
	cin>>n;
	int j=0;
	for(int i=0;i<n;i++){
		cin>>x[i];
		
	}
	sort(x,x+n,greater<int>());
	for(int z=0;z<n;z++){
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
