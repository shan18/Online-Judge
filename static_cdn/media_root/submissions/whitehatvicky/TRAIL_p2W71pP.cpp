
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
long long int i,c2,c5,n;
cin>>n;
long long int x;
for(i=0;i<n;i++)
   cin>>x;
   { while (x%2==0) 
        {x/= 2;
        c2+=1;}
    while (x%5==0) 
        {x/=5;
        c5+=1;}
   }
if(c2<c5)
cout<<c2;
else  
cout<<c5;
return 0;
}
