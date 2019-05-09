#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
long long int c2,c5,n;
cin>>n;
long long int a[n];
for(long long int i=0,i<n,i++)
cin>>a[i];
c2=0;
c5=0;
for(i=0,i<n,i++)
    while (x[i] % 2 == 0) 
        {x[i]/= 2;
        c2+=1;}
    while (x[i] % 5 == 0) 
        {x[i]/=5;
        c5+=1;} 
if(c2 < c5)
    cout<<c2;
else  cout<<c3; 
