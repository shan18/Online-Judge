#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
    long long int cnt = 0,i,t,n,j;
    cin>>t; 
  for(j=0;j<t;j++))
 {cin>>n;
for (i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) {
            if (n / i == i)
                cnt++; 
  
            else 
                cnt = cnt + 2; 
        } 
    }
cout<<cnt;
} 
}
