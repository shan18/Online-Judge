#include<bits/stdc++.h>   
using namespace std;
int main()
{
int n,i,cnt=0;
cin>>n;
int a[n];
cin>>a[0];
for(i=1;i<n;++i)
{
cin>>a[i];
if(a[i]==a[i-1])
++cnt;
}
cout<<n-cnt-1;
}

