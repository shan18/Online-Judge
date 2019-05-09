#include<bits/stdc++.h> 
using namespace std; 
typedef unsigned long long int ull; 

vector<ull> allPrimes;  
int main() 
{ 
	int n;
	cin>>n;
	
	vector<bool> prime(n+1, true); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 

	for (int p=2; p<=n; p++) 
		if (prime[p]) 
			allPrimes.push_back(p);

	ull result = 1; 

	for (int i=0; i < allPrimes.size(); i++) 
	{ 
		ull p = allPrimes[i]; 

		ull exp = 0; 
		while (p <= n) 
		{ 
			exp = exp + (n/p); 
			p = p*allPrimes[i]; 
		} 

		result = result*(exp+1); 
	} 
	
	cout<<result;
	
	return 0; 
} 

