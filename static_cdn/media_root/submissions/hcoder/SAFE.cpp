#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,x[100000],average=0;
	    cin>>n>>a>>b;
	    for(int i=0;i<n;i++){
	        cin>>x[i];
	        average=average+x[i];
	    }
	    average=average/n;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(x[i]>=average-b&&x[i]<=average+b) {
	            count++;
	        }
	    }
	    if(count<a) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
