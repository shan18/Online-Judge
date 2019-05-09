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
	a=a-96;
	sum=sum+a;
}
if(sum==73) r++;
if(sum==51) d++;
}
if(r>d) cout<<"ranjeet";
else if(r<d) cout<<"dheeraj";
else cout<<"draw";
}
