#include <bits/stdc++.h> 
using namespace std; 
  
void SieveOfEratosthenes(long long n, bool prime[], 
                         bool primesquare[], long long a[]) 
{ 
    
    for (long long i = 2; i <= n; i++) 
        prime[i] = true; 
 
    for (long long i = 0; i <= (n * n + 1); i++) 
        primesquare[i] = false; 
  
   
    prime[1] = false; 
  
    for (long long p = 2; p * p <= n; p++) { 

        if (prime[p] == true) { 
   
            for (long long i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    long long j = 0; 
    for (long long p = 2; p <= n; p++) { 
        if (prime[p]) { 
       
            a[j] = p; 
  
            primesquare[p * p] = true; 
            j++; 
        } 
    } 
} 
  

long long countDivisors(long long n) 
{ 

    if (n == 1) 
        return 1; 
  
    bool prime[n + 1], primesquare[n * n + 1]; 
  
    long long a[n]; 
  
 
    SieveOfEratosthenes(n, prime, primesquare, a); 

    long long ans = 1; 
  

    for (long long i = 0;; i++) { 

        if (a[i] * a[i] * a[i] > n) 
            break; 
  
     
        long long cnt = 1; 
        while (n % a[i] == 0) 
        { 
            n = n / a[i]; 
            cnt = cnt + 1;
        } 
   
        ans = ans * cnt; 
    } 
  
    if (prime[n]) 
        ans = ans * 2; 

    else if (primesquare[n]) 
        ans = ans * 3; 
  

    else if (n != 1) 
        ans = ans * 4; 
  
    return ans;
} 
  
int main() 
{ 
    int t;
    cin>>t;
	long long n;
    long long ans;
	for(int i=0;i<t;i++)
	{cin>>n;
     ans=countDivisors(n);
    cout<<ans;
    }
    return 0; 
} 