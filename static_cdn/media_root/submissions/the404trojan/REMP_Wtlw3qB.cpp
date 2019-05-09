#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	long long n,x;
	
	long long sum=0;
	int even[n/2];
	
	cin>>n;
	int j=0;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x%2==0){
			even[j]=x;
			j++;
		}
		else{
			sum=sum+x;
			
		}
	}
	sort(even, even+j);
	int mid=n/2;
	for(int z=0;z<mid;z++){
		sum=sum+(even[z]*2);
	}
	cout<<sum;
	return 0;
}
