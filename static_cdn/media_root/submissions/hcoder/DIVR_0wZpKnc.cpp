#include <iostream>
using namespace std;
int main(){
	 int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		int count=0;
		for(int i=1;i<=n;i++){
			if(n%i==0) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
