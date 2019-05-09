#include<iostream>   
using namespace std;
int main()
{
	int d=51,r=73,d1=0,r1=0;
	int n,i;
	cin>>n;
	for(i=0;i<n;++i){
	string s;
	cin>>s;
	int j,cnt=0;
	for(j=0;s[j]!='\0';++j)
	cnt+=int(s[j])-96;
	if(cnt==d)
	++d1;
	else if(cnt==r)
	++r1;
}
if(d1>r1)
cout<<"dheeraj";
else if(r1>d1)cout<<"ranjeet";
}
