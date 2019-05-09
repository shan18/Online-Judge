#include <iostream>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    set<pair<int,int>> s;
	int n,x[100000];
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>x[i];
	}
	int max1=0,max2=0;
	for(int i=0;i<n-1;i++){
	    for(int j=i;j<n;j++){
	  if(x[i+1]>x[i]){
	    max1=x[i+1];
	    max2=x[i];
	}
	else{
	    max1=x[i];
	    max2=x[i+1];
	}
	if(j>=i+2){
	    if(x[j]>=max1){
	        max1=x[j];
	        max2=max1;
	    }
	    else if(x[j]<max1&&x[j]>=max2){
	        max2=x[j];
	    }
	}
	if(max2!=max1){
	    s.insert(make_pair(max1,max2));
	}
	    }
	}
	for(auto it=s.begin();it!=s.end();it++){
	    pair<int,int> p;
	    p=*it;
	    cout<<p.first<<" "<<p.second<<endl;
	}
	cout<<s.size();
	return 0;
}
