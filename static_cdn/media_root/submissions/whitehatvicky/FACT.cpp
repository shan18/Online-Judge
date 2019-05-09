#include <bits/stdc++.h> 
using namespace std; 
long long int fact(long long int);
int main()
{ 
   long long int cnt = 0,i,n;
    cin>>n;
    n=fact(n);
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
long long int fact(long long int n)
{ long long int j;
   for(j=n-1;j>=1;j--)
     n*=j;
return n;
}
