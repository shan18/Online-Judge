#include <bits/stdc++.h> 
using namespace std;  

int main() { 
    long long t;
    cin>>t;
    while(t--){
    	long long n;
    	cin>>n;
    	long long count = 0; 
    for (long long i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0){ 
            if (n / i == i) 
                count++; 
  
            else
                count = count + 2; 
        } 
    } 
    
    cout<<count<<endl;
	}
    return 0; 
} 
