#include<iostream>
using namespace std;
int main(){
long long int n;
cin>>n;
long long int a[n],i,j,cnt=0;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
for(j=i;j<n;j++)
   if(a[j]>a[i])
   {cnt+=1;
   break;}
cout<<cnt;
}
