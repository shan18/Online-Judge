#include<bits/stdc++.h>   
using namespace std;
int fact(int n){
if(n==1||n==0)
return 1;
else return n*fact(n-1);
}
int main()
{
int n,i=2,cnt=0;
cin>>n;
n=fact(n);
while(n!=1)
{
if(n%i==0){n/=i; ++cnt;}
else ++i;
}
cout<<pow(2,cnt-1);
}
