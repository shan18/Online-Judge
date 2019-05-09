#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pairs;
main(){
	int n,i,j,k;
	pair<int,int> p;
	set<pairs> s;
	cin>>n;
	vector <int> v;
	int arr[n],arr1[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			for(k=i;k<=j;k++){
				//cout<<arr[k]<<" ";
				v.push_back(arr[k]);
			 }
				//cout<<endl;
				sort(v.begin(), v.end(), greater<int>());
				if(v.size()>1&&v[0]!=v[1]){
				 	p = make_pair(v[0],v[1]); }
                  s.insert(p);
			v.clear();
			     //cout<<endl;
		}
		//cout<<endl;
	}
	cout<<s.size()-1;
}
