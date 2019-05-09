#include <iostream>
using namespace std;
int main(){
	long long int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		long long int count=0;
		for(int i=2;i<=n/2+1;i++){
			if(n%i==0) count++;
		}
		cout<<count+2<<endl;
	}
	return 0;
}
