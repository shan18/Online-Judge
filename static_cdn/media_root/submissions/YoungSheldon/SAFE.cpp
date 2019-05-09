#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q){
		long long n,a,b;
		cin>>n>>a>>b;
		unsigned long long x[n];
		for(long long i=0;i<n;i++){
			cin>>x[i];
		}
		sort(x,x+n);
		long long min=0,max=0,sum=0,p=0;
		for(long long y=0;y<n-a;y++){
			for(long long z=y;z<y+a;z++){
				sum+=x[z];
			}
			sum/=a;
			min=x[y];
			max=x[y+a];
			if(min>=((int)sum - b) && max<=((int)sum + b)){
				p=1;
				break;
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
