#include<bits/stdc++.h>
using namespace std;
main(){
int n;
long long int fact=1,i,count=0;
cin>>n;
for(i=1;i<=n;i++){
	fact=fact*i;
} 
for(i=2;i<=fact/2;i++){
	if(fact%i==0) count++;
}
cout<<count+2;
}
