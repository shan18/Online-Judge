#include <iostream>
#include <cmath>
int round(float f){
    int x=f;
    if(f-x>0) x++;
    return x;
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,count=0;
		cin>>n;
		int k=round(sqrt(n));
		for(int i=1;i<=k;i++){
			if(n%i==0){
				if(n/i==i){
					count++;
				}
				else count=count+2;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
