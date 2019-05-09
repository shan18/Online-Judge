#include<bits/stdc++.h>   
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i)
	cin>>a[i];
	    for (int i = 1; i < n-1 ; i++) 
    { 
      count += (a[i] > a[i - 1] && a[i] > a[i + 1]); 
      count += (a[i] < a[i - 1] && a[i] < a[i + 1]); 
    } 
    if(count!=0)
    cout<<count;
    else cout<<n-1;
}

