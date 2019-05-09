#include <iostream>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    set<pair<int,int>> s;
    pair <int,int> p;
	int n;
	cin>>n;
	int k,k1;
	cin>>k;
	for(int i=0;i<n-1;i++){
	    cin>>k1;
	    if(k>k1) {
	        p=make_pair(k,k1);
	        s.insert(p);
	    }
	    else if(k1>k) {
	        p=make_pair(k1,k);
	        s.insert(p);
	    }
	    k=k1;
	}
	cout<<s.size();
	return 0;
}
