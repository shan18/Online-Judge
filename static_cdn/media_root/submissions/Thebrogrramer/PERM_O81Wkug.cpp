#include<bits/stdc++.h>   
using namespace std;
int main()
{

int n;
cin>>n;
int a[n];
for(int i=0;i<n;++i)
cin>>a[i];
for(int i=1;i<n;++i)
{cin>>a[i]; if(a[i]!=a[i-1]) {b[j]=a[i]; ++j; } }
int bsize=j;
cout<<b*(b-1)/2;
}

/*int n;
cin>>n;
int a[n],b[n];
int j=1;
cin>>a[0];
b[0]=a[0];
for(int i=1;i<n;++i)
{cin>>a[i]; if(a[i]!=a[i-1]) {b[j]=a[i]; ++j; } }
int bsize=j;
if(bsize-1>0)
cout<<bsize-1;
else cout<<0;*/

