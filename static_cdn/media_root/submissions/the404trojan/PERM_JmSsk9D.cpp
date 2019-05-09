#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 	
	long long n;
	cin>>n;
	long long arr[n];
	for(int k=0;k<n;k++){
		cin>>arr[k];
	}
     
  	sort(arr,arr+n,greater<long long>());
  	
  	set<pair<long long, long long> > s; 
    for (int i = 0; i < n-1; i++){
        		s.insert(make_pair(arr[i], arr[i+1]));
        	
		}
  	
    cout << s.size(); 
    return 0; 
} 
