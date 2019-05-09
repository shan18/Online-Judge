#include <bits/stdc++.h> 
using namespace std; 
int unq(int arr[], int n) 
{   
	unordered_set<int> s; 
	for (int i = 0; i < n; i++) 
	s.insert(arr[i]);   
	int count = pow(s.size(), 2);   
	return count; 
}  
int main() 
{ 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	cin>>arr[i];  
        cout <<unq(arr, n); 
        return 0; 
}
