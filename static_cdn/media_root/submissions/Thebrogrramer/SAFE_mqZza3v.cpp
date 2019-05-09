#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while((t-1)!=0){
t-1;
long long int a,b,diff;
int n;
cin>>n>>a>>b;
int flag=0,i,j;
long long int arr[n];
for(i=0;i<n;++i)
cin>>arr[i];
sort(arr,arr+n);
for(i=0;i<n;++i){

for(j=i;j<n;++j)
if(2*b-arr[j]==arr[i]&&(j-i-1)<a)
{flag=1; break;}


if(flag) break;
}

if(flag)
cout<<"YES\n";
else cout<<"NO\n";
flag=0;
}
if(t==1)
{


long long int a,b,diff;
int n;
cin>>n>>a>>b;
int flag=0,i,j;
long long int arr[n];
for(i=0;i<n;++i)
cin>>arr[i];
sort(arr,arr+n);
for(i=0;i<n;++i)
for(j=i;j<n;++j)
if(2*b-arr[j]==arr[i]&&(j-i-1)<a)
flag=1; 
if(flag)
cout<<"YES";
else cout<<"NO"; 
}
}
/*int t,n,a,b,i;
cin>>t;
cin>>n>>a>>b;
int arr[n];

int flag=1;
for(i=0;i<n;++i)
{
cin>>arr[i];
}
sort(arr,arr+n);

for(i=0;i<n;++i)
{
if(flag==0||a+i+1>=n)
break;
if(  (arr[i+a+1]-arr[i])  != 2*b)
flag=0;
}
for(i=n-1;i>=0;--i)
{
if(flag==0||i-a-1<0)
break;
if(  (arr[i]-arr[i-a-1])  != 2*b)
flag=0;
}
if(flag==0)
cout<<"YES ";
else cout<<"NO ";

}
*/
