#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,x=0;
	cin>>n;
	while(n){
		char s[100];
		cin>>s;
		long long sum=0;
		for(long long i=0;s[i];i++){
			sum += (int)s[i]-96;
		}
		if(sum==51){
			x--;
		}
		else if(sum==73){
			x++;
		}
		
		n--;
	}
	if(x){
		cout<<"ranjeet\n";
	}
	else{
		cout<<"dheeraj\n";
	}
	return 0;
}
