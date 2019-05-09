#include<bits/stdc++.h>
using namespace std;
pair<long,long> func(long arr[], long l, long r){
	pair<long,long> p;
	long f_max=0, s_max=0;
	for(long i=l;i<=r;i++){
		if(arr[i]>f_max){
			s_max=f_max;
			f_max=arr[i];
		}
		else if(arr[i]>s_max){
			s_max=arr[i];
		}
	}
	p.first=f_max;
	p.second=s_max;
	return p;
};



int main(){
	long n;
	cin>>n;
	long x[n];
	set <pair<long,long> > s;
	for(long a=0; a<n;a++){
		cin>>x[a];
	}
	for(long i=0;i<n;i++){
		for(long j=i+1;j<n;j++){
			s.insert(func(x,i,j));
		}
	}
	cout<<s.size();
	return 0;
}
