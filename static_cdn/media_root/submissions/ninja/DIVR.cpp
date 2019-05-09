#include<bits/stdc++.h>
using namespace std;
main(){
int t;
cin>>t;
long long n,i,count;
while(t--){
	count=0;
cin>>n;
for(i=1;i<=n;i++){
	if(n%i==0) count++;
}

cout<<count<<endl;
}
}
