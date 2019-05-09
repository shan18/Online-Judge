#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int n;
	cin>>n;
	set<int> s;
	int arr[n];
	for(int i=0;i<n;++i){
	cin>>arr[i];  
	s.insert(arr[i]);
	}
        cout <<pow(s.size(), 2); 
}
