#include<bits/stdc++.h>
using namespace std;

long long fun(long long a, long long b){
	long long x=a;
	long long ans=0;
	while(x<=b){
		ans+=b/x;
		x*=a;
	}
	return ans+1;
}

int main(){
	long long n;
	cin>>n;
	vector<long long> v;
	int f[n+1];
	memset(f,0,sizeof(f));
	for(long long i=2;i<=n;i++){
		if(f[i]==0){
			v.push_back(i);
			long long x=i;
			while(x<=n){
				f[x]=1;
				x+=i;
			}
		}
	}
	long long ans=1;
	for(int i=0;i<v.size();i++){
		ans=(ans*fun(v[i],n));
	}
	cout<<ans<<endl;
	return 0;
}