#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	long long int n,a,b,i,num,count;

	while(t--){
		cin>>n>>a>>b;
		for(i=0;i<n;i++){
			cin>>num;
			if(num>=(-b)&&num<=2*b) count++;
		}
		if(count<a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
