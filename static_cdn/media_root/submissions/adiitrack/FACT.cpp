#include<bits/stdc++.h> 
using namespace std; 
typedef unsigned long long int ull; 
vector<ull> allPrimes1;  
void sieve1(int n1) 
{ 
	vector<bool> prime1(n1+1, true); 
	for (int p1=2; p1*p1<=n1; p1++) 
	{ 
		if (prime1[p1] == true) 
		{  
			for (int i1=p1*2; i1<=n1; i1 += p1) 
				prime1[i1] = false; 
		} 
	} 
	for (int p1=2; p1<=n1; p1++) 
		if (prime1[p1]) 
			allPrimes1.push_back(p1); 
} 
ull factorialDivisors1(ull n1) 
{ 
	sieve1(n1);
	ull result1 = 1; 
	for (int i1=0; i1 < allPrimes1.size(); i1++) 
	{ 
		ull p1 = allPrimes1[i1]; 
		ull exp = 0; 
		while (p1 <= n1) 
		{ 
			exp = exp + (n1/p1); 
			p1 = p1*allPrimes1[i1]; 
		} 
		result1 = result1*(exp+1); 
	} 
	return result1; 
}  
int main() 
{ 
	int n1;
	cin>>n1;
	cout << factorialDivisors1(n1); 
	return 0; 
}

