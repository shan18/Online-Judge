#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q){
		long long n,a,b;
		cin>>n>>a>>b;
		signed long long x[n],z[n];
		for(long long i=0;i<n;i++){
			cin>>x[i];
		}
		long long min=0,max=0,sum=0;
		for(long long y=0;y<n-a;y++){
			copy(x,x+n,z);
			sort(z+y,z+y+a);
			/*for(long long i=0;i<n;i++){
				cout<<x[i]<<"\t";
			}
			cout<<"\n";
			for(long long i=0;i<n;i++){
				cout<<z[i]<<"\t";
			}*/
			min=z[y];
			max=z[y+a-1];
			sum = (min + max)/2;
			if(min>=(sum - b) && max<=(sum + b)){
				cout<<"NO\n";
				break;
			}
		}
		if(!(min>=(sum - b))){
			cout<<"YES\n";
		}
		q--;
	}
	return 0;
}
