#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,f=0,t=0;
	cin>>n;
	while(n){
		cin>>x;
		while(!(x%2)||!(x%5)){
			if(x%10==0){
				f++;
				t++;
				x/=10;
				continue;
			}
			else if(x%5==0){
				f++;
				x/=5;
				continue;
			}
			else if(x%2==0){
				t++;
				x/=2;
				continue;
			}
		}
		n--;
	}
	if(f<t){
		cout<<f;
	}
	else{
		cout<<t;
	}
	return 0;
}
