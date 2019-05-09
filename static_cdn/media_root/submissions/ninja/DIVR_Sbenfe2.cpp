#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	long long int n,count=0;
	while(t--){
		cin>>n; 
		count=0;
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
             
            if (n / i == i) 
                count++; 
  
            else 
                count = count + 2; 
        } 
    } 
    cout<<count<<endl;
	}
}
