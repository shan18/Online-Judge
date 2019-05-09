#include<bits/stdc++.h> 
using namespace std; 
int n;  
vector<unsigned long long int> prms; 
void sieve(int n) 
{ 
vector<bool> prms(n+1, true); 
for (int p=2; p*p<=n; p++) 
{ 
    if (prms[p] == true) 
    { 

        for (int i=p*2; i<=n; i += p) 
            prms[i] = false; 
    } 
} 
for (int p=2; p<=n; p++) 
    if (prms[p]) 
        prms.push_back(p); 
} 
unsigned long long int div(unsigned long long int n) 
{ 
sieve(n); 
unsigned long long int result = 1; 
for (int i=0; i < prms.size(); i++) 
{ 

    unsigned long long int p = prms[i]; 

    unsigned long long int exp = 0; 
    while (p <= n) 
    { 
        exp = exp + (n/p); 
        p = p*prms[i]; 
    } 

    result = result*(exp+1); 
} 
return result; 
} 
int main() 
{ 
cin>>n;
cout << div(n); 
return 0; 
} 
