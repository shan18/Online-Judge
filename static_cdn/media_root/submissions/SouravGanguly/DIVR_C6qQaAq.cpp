#include<bits/stdc++.h>
using namespace std;
int main()
{   int t,i;
   long long int n,cnt=0,j,a[100];
   cin>>t;
   for(i=0;i<t;i++)
   { cnt=0;
   	cin>>n;
   	for (int j = 1; j <= sqrt(n); j++) { 
        if (n % j == 0) {  
            if (n / j == j) 
                cnt++; 
  
            else  
                cnt = cnt + 2; 
        } 
    }
	a[i]=cnt; 
   }
   for(i=0;i<t;i++)
   {
   	cout<<a[i]<<endl;
   }
   
}
