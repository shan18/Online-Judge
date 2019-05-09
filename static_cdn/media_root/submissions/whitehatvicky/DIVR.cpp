#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
    long long int cnt = 0,i,t,n;
    cin>>t; 
  for(i=0;i<t;i++))
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
