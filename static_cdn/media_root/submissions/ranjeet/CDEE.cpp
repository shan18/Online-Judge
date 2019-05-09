#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long c=0;
		for(long long j=1;j*j<=n;j++){
			if(j*j==n){
				c++;
			}
			else if(n%j==0){
				c+=2;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}