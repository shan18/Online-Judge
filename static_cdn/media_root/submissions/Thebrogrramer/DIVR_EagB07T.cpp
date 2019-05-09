#include<bits/stdc++.h>   
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
	long long int n;
	cin>>n;
	int cnt = 1; 
for (int i = 1; i<=n/2;i++)  
if (n%i==0)
++cnt;
} 
cout<<cnt; 	
}
}
