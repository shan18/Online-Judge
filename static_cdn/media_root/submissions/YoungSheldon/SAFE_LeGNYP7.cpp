#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q){
		long long n,a,b;
		cin>>n>>a>>b;
		signed long long x[n];
		for(long long i=0;i<n;i++){
			cin>>x[i];
		}
		sort(x,x+n);
		long long min=0,max=0,sum=0,p=1;
		for(long long y=0;y<n-a;y++){
			for(long long z=y;z<y+a;z++){
				sum+=x[z];
			}
			sum/=a;
			min=x[y];
			max=x[y+a-1];
			if(!(min<((long long)sum - b) || max>((long long)sum + b))){
				p=1;
			}
		}
		if(p){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
		q--;
	}
	return 0;
}
