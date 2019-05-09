#include<bits/stdc++.h>
using namespace std;
main(){
int n,i;
long long int fact=1,count=0;
cin>>n;
for(i=1;i<=n;i++){
	fact=fact*i;
} 

 for (int i = 1; i <= sqrt(fact); i++) { 
        if (fact % i == 0) { 
             
            if (fact / i == i) 
                count++; 
  
            else 
                count = count + 2; 
        } 
    } 
//for(i=2;i<=fact/2;i++){
//	if(fact%i==0) count++;
//}
cout<<count;
}
