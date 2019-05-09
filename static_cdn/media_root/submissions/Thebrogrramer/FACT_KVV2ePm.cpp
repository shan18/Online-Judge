#include<bits/stdc++.h> 
using namespace std;
int divisors(int n,int primes[]){
int result=1;
for(int i=0;primes[i]<=n;++i){
int k=primes[i];
int count=0;
while((n/k)!=0){
count+=count;
k*=primes[i];
}
result= result*(count+1);
}
}
int main(){
int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67};
int n;
cin>>n;
cout<<divisors(n,primes);
}
