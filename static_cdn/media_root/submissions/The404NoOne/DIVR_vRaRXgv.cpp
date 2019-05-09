#include <bits/stdc++.h> 
using namespace std; 
  

int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            
            if (n / i == i) 
                cnt++; 
  
            else
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

int main() 
{   int t;
   cin>>t;
	long long n;
	for(int i=0;i<t;i++)
	{scanf("%d",&n);
     printf("%d\n", 
           countDivisors(n)); 
	}
    return 0; 
} 