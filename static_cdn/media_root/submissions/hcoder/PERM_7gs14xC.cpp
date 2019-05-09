#include <iostream>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int x[100000];
    set<pair<int,int> > s;
    pair <int,int> p;
	int n;
	cin>>n;
	int k,k1;
	cin>>k;
	x[0]=k;
	for(int i=0;i<n-1;i++){
	    cin>>k1;
	    x[i]=k1;
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
	sort(x,x+n,greater<int> ());
	for(int i=0;i+1<n-1;i++){
	    if(x[i]!=x[i+1]){
	    p=make_pair(x[i],x[i+1]);
	    s.insert(p);
	    }
	}
	cout<<s.size();
	return 0;
}
