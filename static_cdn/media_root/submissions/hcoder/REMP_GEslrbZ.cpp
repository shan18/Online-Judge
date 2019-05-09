#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long int n,k,s=0;
	vector<long long int> ve;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>k;
	    if(k%2==0) ve.push_back(k);
	    else s=s+k;
	}
	sort(ve.begin(),ve.end());
	for(int i=0;i<ve.size()&&i<n/2;i++){
	    ve[i]=ve[i]*2;
	}
	for(int i=0;i<ve.size();i++){
	    s=s+ve[i];
	}
	cout<<s;
	return 0;
}
