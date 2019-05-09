#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long int n,k;
	vector<int> ve,vo;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>k;
	    if(k%2==0) ve.push_back(k);
	    else vo.push_back(k);
	}
	sort(ve.begin(),ve.end());
	for(int i=0;i<ve.size();i++){
	    if(i>n/2) break;
	    ve[i]=ve[i]*2;
	}
	long long int s=0;
	for(int i=0;i<ve.size();i++){
	    s=s+ve[i];
	}
	for(int i=0;i<vo.size();i++){
	    s=s+vo[i];
	}
	cout<<s;
	return 0;
}
