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
		for(long long i=0;i<n;i++){
			cout<<x[i]<<"\t";
		}
		cout<<"\n";
		long long min=0,max=0,sum=0,p=0;;
		for(long long y=0;y<=n-a;y++){
			min=x[y];
			cout<<min<<"\n";
			max=x[y+a-1];
			cout<<max<<"\n";
			for(sum=min+b;sum<max-b+1;sum++){
				if(min>=(sum - b) && max<=(sum + b)){
					cout<<"NO\n";
					p=1;
					break;
				}
			}
			//cout<<sum<<"\n";
			if(p==1){
				break;
			}
		}
		if(p==0){
			cout<<"YES\n";
		}
		q--;
	}
	return 0;
}
