#include<bits/stdc++.h>   
using namespace std;
int main()
{

int n,flag=1;
cin>>n;
int a[n];
cin>>a[0];
for(int i=1;i<n;++i)
{
cin>>a[i];
if(a[i]<a[i-1])
flag=0;
}
if(flag)
cout<<n-1;
else cout<<n;
}
/*int n,i,j,cnt=0,x,y;
cin>>n;
int a[n];
int m[n][2];
for(i=0;i<n;++i)
cin>>a[i];
for(i=0;i<n;++i){
x=a[i]; y=a[i];


for(j=i+1;j<=n;++j)


{
if( (  x!=max(a[j],x)  ||y!=min(a[j],y)  )&&x!=y )
++cnt;
x=max(a[j],x);
y=min(a[j],y);
}



}
cout<<cnt;*/


