#include<bits/stdc++.h>
using namespace std;
main(){
int n,a,i,sum=0,r=0,d=0;
cin>>n;
string s;
while(n--){
	cin>>s;
	sum=0;
for(i=0;i<s.length();i++){
	a=int(s[i]);
	sum=sum+a;
}
if(sum==745) r++;
if(sum==672) d++;
}
if(r>d) cout<<"ranjeet"<<endl;
else cout<<"dheeraj"<<endl;
}
